#include "statistics.hh"
#include "stateexception.hh"


Student::Statistics::Statistics()
{
}

 Student::Statistics::~Statistics(){

}


void Student::Statistics::addSavedShip(){
    savedShips_++;
}

unsigned Student::Statistics::getSavedShips() const{
    return savedShips_;
}

void Student::Statistics::addLostShip(){
    lostShips_++;
}

unsigned Student::Statistics::getLostShips() const{
    return lostShips_;
}

void Student::Statistics::addPoints(unsigned amount){
    points_ += amount;
}

void Student::Statistics::reducePoints(unsigned amount){
    if(amount > points_){
        throw Common::StateException("Cannot reduce more than the amount of points.");
    }
    else{
        points_ -= amount;
    }
}

unsigned Student::Statistics::getPoints() const{
    return points_;
}

void Student::Statistics::addCredits(unsigned amount){
    credits_ += amount;
}

void Student::Statistics::reduceCredits(unsigned amount){
    if((int)amount > credits_){
        throw Common::StateException("Cannot reduce more than the amount of points.");
    }
    else{
        credits_ -= amount;
    }
}

int Student::Statistics::getCreditBalance() const{
    return credits_;
}

void Student::Statistics::reset(){
    savedShips_ = 0;
    lostShips_ = 0;
    points_ = 0;
    credits_ = 0;
}
