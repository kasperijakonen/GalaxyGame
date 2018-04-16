#include "playershipgraphics.hh"


PlayerShipGraphics::~PlayerShipGraphics(){

}

void PlayerShipGraphics::setPlayerShip(std::shared_ptr<Common::Ship> ship) {
    playerShip_ = ship;
}

void PlayerShipGraphics::keyPressEvent(QKeyEvent *event){
    int x = this->scenePos().x();
    int y = this->scenePos().y();

    // Moving the player's ship on keyboard events
    if(event->key() == Qt::Key_Right){
        if(x > 470){
            this->setPos(-480, y);
        }
        else{
            this->setPos(x + STEP, y);
        }
    }
    if(event->key() == Qt::Key_Left){
        if(x < -470){
            this->setPos(480, y);
        }
        else{
            this->setPos(x - STEP, y);
        }
    }
    if(event->key() == Qt::Key_Up){
        if(y < -380){
            this->setPos(x, 390);
        }
        else{
            this->setPos(x,y - STEP);
        }
    }
    if(event->key() == Qt::Key_Down){
        if(y > 380){
            this->setPos(x, -390);
        }
        else{
            this->setPos(x,y + STEP);
        }
    }

}
