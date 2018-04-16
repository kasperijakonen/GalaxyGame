#include "shipgraphics.hh"
#include "ship.hh"

ShipGraphics::ShipGraphics(){

}

ShipGraphics::~ShipGraphics(){

}


void ShipGraphics::toggleDistress(){
    if(distress_ == false){
        distress_ = true;
    }
    else{
        distress_ = false;
    }
    update();
}

bool ShipGraphics::getDistress(){
    return distress_;
}

