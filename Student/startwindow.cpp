#include "startwindow.hh"
#include "ui_startwindow.h"
#include "mainwindow.hh"

#include "galaxy.hh"
#include "initialize.hh"
#include "igamerunner.hh"
#include "utility.hh"
#include "eventhandler.hh"

#include <QApplication>
#include <memory>
#include <time.h>
#include "starsystem.hh"
#include <QTimer>


int const NPC_SHIPS = 13;


StartWindow::StartWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartWindow)
{
    ui->setupUi(this);

    // Setting the backgroud for the StartWindow
    setStyleSheet( "background-image:url(:/prefix1/StartImage.JPG);" );

    ui->quitButton->setStyleSheet("QPushButton{background: transparent;}");
    ui->playButton->setStyleSheet("QPushButton{background: transparent;}");

    connect(ui->playButton, SIGNAL(clicked(bool)), this, SLOT(openMainWindow()));
}

StartWindow::~StartWindow()
{
    delete ui;
}

void StartWindow::openMainWindow() {

    MainWindow* window = new MainWindow();

    // Initializing objects needed by the GameRunner
    std::shared_ptr<Common::IEventHandler> handler = std::make_shared<Student::EventHandler>(window);
    std::shared_ptr<Student::Galaxy> galaxy = std::make_shared<Student::Galaxy>();

    // Initializing the GameRunner
    std::shared_ptr<Common::IGameRunner> gameRunner = Common::getGameRunner(galaxy, handler);

    Common::utilityInit(time(NULL));

    // Spawns the player's ship
    gameRunner->spawnShips(1);

    window->initialize(gameRunner, galaxy);
    std::shared_ptr<Common::Ship> playerShip = galaxy->getShipVector()[0];

    window->addPlayerShip(playerShip);

    // Spawns npc ships
    gameRunner->spawnShips(NPC_SHIPS);

    // Sets star systems to the galaxy
    Common::StarSystem::StarSystemVector systems = galaxy->getSystems();
    for (auto system : systems) {
        window->addStarSystem(system);
    }

    this->hide();
    window->show();

}
