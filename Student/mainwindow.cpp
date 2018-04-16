#include <fstream>
#include <iostream>
#include <time.h>
#include <chrono>
#include <thread>
#include <memory>
#include <QGraphicsItemAnimation>
#include <qpoint.h>
#include "repairaction.hh"
#include "ship.hh"
#include "eventhandler.hh"
#include "initialize.hh"
#include "startwindow.hh"
#include "mainwindow.hh"
#include "ui_mainwindow.h"
#include "starsystemgraphics.hh"
#include "shipgraphics.hh"



int GAME_BOARD_X = 600;
int GAME_BOARD_Y = 600;
int TIMERTIME = 310;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(-300, -300, GAME_BOARD_X, GAME_BOARD_Y,this);

    this->setFocus();

    ui->graphicsView->setScene(scene);
    scene->setFocus();
    ui->graphicsView->setFocus();

    ui->graphicsView->show();

    //Setting the background
    ui->graphicsView->setStyleSheet( "background-image:url(:/prefix2/backImage.JPG);" );

    QFont font;
    font.setPointSize(100);
    font.setWeight(QFont::Bold);

    // Opening the file that stores the current record
    std::ifstream file("Student/record.txt");
    if (not file) {
        std::cerr << "Could not open file record.txt. Check run working directory." << std::endl;
    }
    else {
        std::string row;
        int record;

        getline(file, row);
        record = stoi(row);

        ui->recordLcdNumber->display(record);
    }

    // Setting pause text to the middle of game board
    gameboardtext_->setDefaultTextColor(Qt::gray);
    gameboardtext_->setFont(font);
    gameboardtext_->setPos(-200,-100);
    gameboardtext_->setPlainText("Paused");
    gameboardtext_->setZValue(3);
    scene->addItem(gameboardtext_);
    gameboardtext_->hide();

    //Hiding the new game button during game
    ui->newGameButton->hide();

    //Main game loop that creates and executes actions on certain intervals
    connect(timer, SIGNAL(timeout()), this, SLOT(OwnUpdate()));
    timer->start(TIMERTIME);

    connect(ui->pause_button, SIGNAL(clicked(bool)), this, SLOT(pause()));

    connect(ui->newGameButton, SIGNAL(clicked(bool)), this, SLOT(newGame()));
}

MainWindow::~MainWindow(){

    delete ui;
}

void MainWindow::initialize(std::shared_ptr<Common::IGameRunner> gameRunner,
                std::shared_ptr<Student::Galaxy> galaxy) {

    gameRunner_ = gameRunner;
    galaxy_ = galaxy;

}

void MainWindow::addStarSystem(std::shared_ptr<Common::StarSystem> system) {

    StarSystemGraphics* item = new StarSystemGraphics();
    item->system = system;
    Common::Point coordinates = system->getCoordinates();

    item->setPos((coordinates.x)*15, (coordinates.y)*15);

    //Adding graphic item to the game board
    scene->addItem(item);

    //Making sure starsystems stay on the back of the ships
    item->setZValue(-1);

    //Adding the starsystem and the graphic item related to it to a map
    this->starSystemMap_.insert(std::pair<std::shared_ptr<Common::StarSystem>, StarSystemGraphics*> (system, item));

}

void MainWindow::addPlayerShip (std::shared_ptr<Common::Ship> ship) {
    PlayerShipGraphics* item = new PlayerShipGraphics();
    item->setPlayerShip(ship);

    scene->addItem(item);
    scene->setFocus();
    item->setFlag(QGraphicsItem::ItemIsFocusable);
    item->setFocus();

    //Setting the playership on top of other objects on the board
    item->setZValue(2);

    this->playerShip_ = ship;
    this->playerShipGraphics_ = item;


}

void MainWindow::addShip (std::shared_ptr<Common::Ship> ship) {
    ShipGraphics* item = new ShipGraphics();
    scene->addItem(item);

    item->setZValue(0);

    //Adding the shared pointer to the ship and the ShipGraphics object to a map
    this->shipMap_.insert(std::pair<std::shared_ptr<Common::Ship>, ShipGraphics*> (ship, item));
}


void MainWindow::moveShip(std::shared_ptr<Common::Ship> ship, Common::Point origin,
                          Common::Point target) {
    ShipGraphics* item;

    //Finding the right ShipGrahphic object from the map
    item = this->shipMap_.at(ship);


    QTimeLine *timer3 = new QTimeLine(TIMERTIME, this);
    timer3->setFrameRange(0, 150);

    QGraphicsItemAnimation *animation = new QGraphicsItemAnimation;
    animation->setItem(item);
    animation->setTimeLine(timer3);

    animation->setPosAt(0, QPoint((origin.x)*15, (origin.y)*15));
    animation->setPosAt(1, QPoint((target.x)*15, (target.y)*15));

    timer3->start();

}

void MainWindow::distress(std::shared_ptr<Common::Ship> ship) {

    ShipGraphics *shipItem = this->shipMap_.at(ship);
    shipItem->toggleDistress();

}

void MainWindow::OwnUpdate() {

    gameRunner_->createActions();
    gameRunner_->doActions();
    this->checkCollision();
    this->checkAbandoned();
    playerShipGraphics_->setFocus();

}



void MainWindow::checkAbandoned() {

    // Going through all ships on the game board and checking if they are abandoned
    // If a ship is abandoned, it disappears from the game board and new ship is created in a random location
    for(std::map<std::shared_ptr<Common::Ship>, ShipGraphics*>::iterator it=shipMap_.begin(); it != shipMap_.end(); ++it){
        if(it->first->isAbandoned() == true){
            gameRunner_->spawnShips(1);
            it->second->hide();
            statistics->addLostShip();

            // Ending the game when there are 10 lost ships
            if (statistics->getLostShips() == 10) {
                gameover();
            }

            // Displaying the number of lost ships
            ui->abandonedShipsLcdNumber->display((int) statistics->getLostShips());

            shipMap_.erase(it->first);            
        }
    }
}

void MainWindow::checkCollision(){

    int psx = playerShipGraphics_->scenePos().x();
    int psy = playerShipGraphics_->scenePos().y();

    QString saveLabelText;

    // Going through all ships on the game board
    for(std::map<std::shared_ptr<Common::Ship>, ShipGraphics*>::iterator it=shipMap_.begin(); it != shipMap_.end(); ++it){

        // Checking if the player's ship is in contact with a ship in distress and if so, creating a new RepairAction
        if(std::abs(psx - it->second->scenePos().x()) < 14 && std::abs(psy - it->second->scenePos().y()) < 14 && it->second->getDistress() == true){
            Common::RepairAction *repairAction = new Common::RepairAction(playerShip_, it->first->Common::Ship::getEngine(), false);

            // Checking if the ship can be repaired
            while(repairAction->canDo() == true){
                if (repairAction->execute()) {
                    // Ship saved
                    statistics->addSavedShip();
                }
            }

            // Adding the name of the saved ship in a label
            saveLabelText = QString::fromStdString("You saved ship \n" + it->first->Common::Ship::getName());
            ui->saveLabel->setText(saveLabelText);

            // Displaying the number of saved ships
            ui->savedShipsLcdNumber->display((int) statistics->getSavedShips());
        }
    }
}


void MainWindow::pause() {

    QString text = ui->pause_button->text();

    if (text == "Pause") {

        timer->stop();
        timer2->stop();
        ui->pause_button->setText("Continue");

        // Setting text "Paused" visible to the game board
        gameboardtext_->setVisible(true);

    }

    else {
        timer->start(TIMERTIME);
        timer2->start(TIMERTIME);
        ui->pause_button->setText("Pause");

        // Hiding the pause text
        gameboardtext_->hide();

    }
}

void MainWindow::gameover() {

    gameboardtext_->setPlainText("GAME OVER");
    gameboardtext_->setPos(-400,-100);
    gameboardtext_->setVisible(true);
    timer->stop();
    timer2->stop();
    ui->pause_button->hide();
    ui->newGameButton->setVisible(true);

    checkRecord();


}

void MainWindow::newGame() {

    gameboardtext_->hide();
    ui->pause_button->setVisible(true);
    ui->newGameButton->hide();
    ui->saveLabel->setText("");
    gameboardtext_->setPlainText("Paused");
    gameboardtext_->setPos(-200,-100);

    // Repairs all ships for the next game
    for(std::map<std::shared_ptr<Common::Ship>, ShipGraphics*>::iterator it=shipMap_.begin(); it != shipMap_.end(); ++it){
        Common::RepairAction *repairAction = new Common::RepairAction(playerShip_, it->first->Common::Ship::getEngine(), false);

        while(repairAction->canDo() == true){
            repairAction->execute();
        }
    }

    // Reseting the statistics for the new game
    statistics->reset();

    // Reseting the displays that show saved and lost ships
    ui->abandonedShipsLcdNumber->display((int) statistics->getLostShips());
    ui->savedShipsLcdNumber->display((int) statistics->getSavedShips());

    // Reseting the player's ship to the middle
    playerShipGraphics_->setPos(0, 0);

    timer->start(TIMERTIME);
    timer2->start(TIMERTIME);

}

void MainWindow::checkRecord() {

    std::string row;
    unsigned record;

    // Opening the file that stores the current record
    std::ifstream file("Student/record.txt");

    if (not file) {
        std::cerr<<"Could not open file record.txt" << std::endl;
    }
    else {
        getline(file, row);
        record = stoi(row);

    // Checking if a new record was set
        if (record < statistics->getSavedShips()) {
            int newrecord = statistics->getSavedShips();

            // Replacing the old record with new
            std::ofstream write("Student/record.txt");
            write << newrecord << std::endl;
            ui->recordLcdNumber->display(newrecord);
        }

    }
}
