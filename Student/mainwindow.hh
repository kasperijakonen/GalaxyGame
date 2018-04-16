#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include <QMainWindow>
#include <memory>
#include <QtCore>
#include <QtGui>
#include <QLabel>
#include <QTimer>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <map>
#include "ship.hh"
#include "shipgraphics.hh"
#include "starsystemgraphics.hh"
#include "playershipgraphics.hh"
#include "galaxy.hh"
#include "igamerunner.hh"
#include "statistics.hh"

#ifdef English_dox
/**
 * @file
 * @brief Defines MainWindow and its methods
 */
#endif

class PlayerShipGraphics;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    #ifdef English_dox
    /**
     * @brief Constructs a new MainWindow object
     */
    #endif
    explicit MainWindow(QWidget *parent = 0);

    #ifdef English_dox
    /**
     * @brief Destructor of the MainWindow object
     */
    #endif
    ~MainWindow();


    #ifdef English_dox
    /**
     * @brief Initializes the MainWindow object
     *
     * @param gameRunner - the game runner to be used in initializing
     * @param galaxy - the galaxy to be used in initializing
     * @post Galaxy is initialized
     */
    #endif
    void initialize(std::shared_ptr<Common::IGameRunner> gameRunner,
                    std::shared_ptr<Student::Galaxy> galaxy);

    #ifdef English_dox
    /**
     * @brief Adds a new StarsystemGraphicItem
     *
     * @param system - the starsystem that is added to the game board
     * @post StarSystem is added to the game board
     */
    #endif
    void addStarSystem(std::shared_ptr<Common::StarSystem> system);

    #ifdef English_dox
    /**
     * @brief Constructs and adds a new ShipGraphicItem to the game board
     *
     * @param ship - shared pointer to the ship object that should be added
     * @post Ship is added to the game board
     */
    #endif
    void addShip (std::shared_ptr<Common::Ship> ship);

    #ifdef English_dox
    /**
     * @brief Constructs and adds the player's ship to the game board
     *
     * @param ship - shared pointer to the ship object that should be added
     * @post PlayerShip is added to the game board
     */
    #endif
    void addPlayerShip (std::shared_ptr<Common::Ship> ship);

    #ifdef English_dox
    /**
     * @brief Moves a ship on the gameboard
     *
     * @param ship - shared pointer to the ship that should be moved
     * @param origin - point of the origin of the ship
     * @param target - point of the target of the ship
     */
    #endif
    void moveShip(std::shared_ptr<Common::Ship> ship, Common::Point origin,
                   Common::Point target);

    #ifdef English_dox
    /**
     * @brief Toggles the ships distress on or of
     *
     * @param ship - shared pointer to the ship whose distress should be toggled
     * @post Distress is toggled
     */
    #endif
    void distress(std::shared_ptr<Common::Ship> ship);

    #ifdef English_dox
    /**
     * @brief Checks for a collision between the player's ship and a ship in distress
     * @post If collision happened, checkAbandoned is called
     */
    #endif
    void checkCollision();

    #ifdef English_dox
    /**
     * @brief Checks if a ship is abandoned and if it is, removes it from the gameboard
     * @post If ship is abandoned it is removed from the game board
     */
    #endif
    void checkAbandoned();

    #ifdef English_dox
    /**
     * @brief Methdod which is called when the game ends (10 lost ships)
     * @post Game ends
     */
    #endif
    void gameover();

    #ifdef English_dox
    /**
     * @brief Checks if the player set a new record and stores it in record.txt file
     * @post If new record was set, it is written to the file
     */
    #endif
    void checkRecord();

private slots:

    #ifdef English_dox
    /**
     * @brief Update method that is called on a certain interval to create and execute actions for npc ships
     */
    #endif
    void OwnUpdate();

    #ifdef English_dox
    /**
     * @brief Methdod that pauses and continues the game
     * @post Game is paused or continued
     */
    #endif
    void pause();

    #ifdef English_dox
    /**
     * @brief Methdod that is called when the player wants to start a new game
     * @post New game is started
     */
    #endif
    void newGame();

private:
    Ui::MainWindow *ui;

    QGraphicsScene *scene;
    QGraphicsRectItem *rect;


    std::shared_ptr<Common::IGameRunner> gameRunner_;
    std::shared_ptr<Student::Galaxy> galaxy_;
    PlayerShipGraphics *playerShipGraphics_ ;

    std::vector<ShipGraphics*> ship_vector_;
    std::vector<StarSystemGraphics*> starSystem_vector_;
    std::shared_ptr<Common::Ship> playerShip_;

    std::map<std::shared_ptr<Common::Ship>, ShipGraphics*> shipMap_;
    std::map<std::shared_ptr<Common::StarSystem>, StarSystemGraphics*> starSystemMap_;

    std::shared_ptr<Student::Statistics> statistics = std::make_shared<Student::Statistics>();

    QTimer *timer = new QTimer(this);
    QTimer *timer2 = new QTimer(this);

    QGraphicsTextItem * gameboardtext_ = new QGraphicsTextItem;



};



#endif // MAINWINDOW_HH
