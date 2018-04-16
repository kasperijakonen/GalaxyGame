#ifndef SHIPGRAPHICS_HH
#define SHIPGRAPHICS_HH

#ifdef English_dox
/**
 * @file
 * @brief Defines the ship's graphics and methods used for its distress
 */
#endif

#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QPainter>
#include <point.hh>
#include <memory>
#include "starsystem.hh"
#include "ship.hh"

class ShipGraphics : public QGraphicsItem
{
public:

    #ifdef English_dox
    /**
     * @brief Constructs a new ShipGraphics object
     */
    #endif
    ShipGraphics();

    #ifdef English_dox
    /**
     * @brief Destructs the ShipGraphics object
     */
    #endif
    virtual ~ShipGraphics();

    #ifdef English_dox
    /**
     * @brief Virtual method inherited from the QGraphicItem class
     * @return Returns the item's approximate area
     */
    #endif
    QRectF boundingRect() const {
        return QRect(0, 0, 14, 14);
    }

    #ifdef English_dox
    /**
     * @brief Virtual method inherited form the QGraphicsItem class
     */
    #endif
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,
               QWidget *widget){
        QBrush brush;
        if(distress_ == false){
            brush = Qt::cyan;
            this->setZValue(0);
        }
        else{
            brush = Qt::red;
            this->setZValue(1);

        }
        painter->setBrush(brush);
        QRectF rect = boundingRect();

        painter->drawEllipse(rect);
    }

    #ifdef English_dox
    /**
     * @brief Method that toggles the ship's distress on or off
     */
    #endif
    void toggleDistress();

    #ifdef English_dox
    /**
     * @brief Method that returns the current distress state (on/off)
     */
    #endif
    bool getDistress();


private:
    std::shared_ptr<Common::Ship> ship_;
    bool distress_ = false;


};

#endif // SHIPGRAPHICS_HH
