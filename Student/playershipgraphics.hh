#ifndef PLAYERSHIPGRAPHICS_HH
#define PLAYERSHIPGRAPHICS_HH

#ifdef English_dox
/**
 * @file
 * @brief Defines the player's ship
 */
#endif

#include <QGraphicsItem>
#include <QPainter>
#include <point.hh>
#include <memory>
#include <iostream>
#include "starsystem.hh"
#include "mainwindow.hh"
#include "ship.hh"

const int STEP = 11 ;



class PlayerShipGraphics : public QGraphicsItem
{
public:

    #ifdef English_dox
    /**
     * @brief Constructs a new PlayerShipGraphics object
     */
    #endif
    PlayerShipGraphics(){}

    #ifdef English_dox
    /**
     * @brief Destructs the PlayerShipGraphics object
     */
    #endif
    virtual ~PlayerShipGraphics();

    #ifdef English_dox
    /**
     * @brief Sets the players ship
     *
     * @param ship - shared pointer to the ship that shoud be the player's ship
     */
    #endif
    void setPlayerShip(std::shared_ptr<Common::Ship> ship);

    #ifdef English_dox
    /**
     * @brief Method that is used to move the players ship on keyboard events
     *
     * @param event - the keyboard event
     */
    #endif
    void keyPressEvent(QKeyEvent *event);

    #ifdef English_dox
    /**
     * @brief Virtual method inherited form QGraphicItem class
     * @return Returns the approximate area of the item
     */
    #endif
    QRectF boundingRect() const {
        return QRectF(0, 0, 14, 14);
    }

    #ifdef English_dox
    /**
     * @brief Virtual method inherited from QGraphicItem
     */
    #endif
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,
               QWidget *widget){
        QBrush brush(QColor(255,0,255));
        QRectF rect = boundingRect();
        painter->setBrush(brush);
        painter->drawEllipse(rect);
    }



private:
    std::shared_ptr<Common::Ship> playerShip_;

};


#endif // PLAYERSHIPGRAPHICS_HH
