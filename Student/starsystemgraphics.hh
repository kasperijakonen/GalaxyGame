#ifndef STARSYSTEMGRAPHICS_HH
#define STARSYSTEMGRAPHICS_HH
#ifdef English_dox
/**
 * @file
 * @brief Defines the starsystems graphics
 */
#endif

#include <QGraphicsItem>
#include <QPainter>
#include <point.hh>
#include <memory>
#include "starsystem.hh"

class StarSystemGraphics : public QGraphicsItem
{
public:

    #ifdef English_dox
    /**
     * @brief Constructs a new StarSystemGraphics object
     */
    #endif
    StarSystemGraphics();

    #ifdef English_dox
    /**
     * @brief Destructs the StarSystemGraphics object
     */
    #endif
    virtual ~StarSystemGraphics();

    #ifdef English_dox
    /**
     * @brief Virtual method inherited from the QGraphicItem class
     * @return Returns the item's approximate area
     */
    #endif
    QRectF boundingRect() const {
        return QRectF(0, 0, 14, 14);
    }

    #ifdef English_dox
    /**
     * @brief Virtual method inherited form the QGraphicsItem class
     */
    #endif
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,
               QWidget *widget){
        QBrush brush(Qt::blue);
        QRectF rect = boundingRect();
        painter->setBrush(brush);
        painter->drawRect(rect);
    }

    std::shared_ptr<Common::StarSystem> system;

private:


};

#endif // STARSYSTEMGRAPHICS_HH
