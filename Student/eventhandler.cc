#include <iostream>
#include "eventhandler.hh"

Student::EventHandler::EventHandler(MainWindow *window){
    window_ = window;
}

Student::EventHandler::~EventHandler(){

}

void Student::EventHandler::shipSpawned(std::shared_ptr<Common::Ship> ship){
    window_->addShip(ship);
}

void Student::EventHandler::shipRemoved(std::shared_ptr<Common::Ship> ship){
}

void Student::EventHandler::shipRelocated(std::shared_ptr<Common::Ship> ship,
                       std::shared_ptr<Common::StarSystem> starSystem){

}

void Student::EventHandler::shipMoved(std::shared_ptr<Common::Ship> ship,
                   Common::Point origin, Common::Point target){
    window_->moveShip(ship, origin, target);

}

void Student::EventHandler::exceptionInExecution(std::shared_ptr<Common::Ship> ship, std::string const& msg){

}

void Student::EventHandler::distressOn(std::shared_ptr<Common::Ship> ship){

    window_->distress(ship);
}

void Student::EventHandler::distressOff(std::shared_ptr<Common::Ship> ship){

    window_->distress(ship);
}

void Student::EventHandler::shipAbandoned(std::shared_ptr<Common::Ship> ship){

}
