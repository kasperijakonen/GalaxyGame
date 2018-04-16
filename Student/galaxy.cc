#include "galaxy.hh"


Student::Galaxy::Galaxy():
    shipVector()
{
}
Student::Galaxy::~Galaxy(){

}


void Student::Galaxy::addShip(std::shared_ptr<Common::Ship> ship){

    // Checking if the ship already exists
    unsigned i = 0;
    while (i < shipVector.size()) {
        if (ship == shipVector[i]) {
            throw Common::StateException("Ship is already added");
        }
        ++i;
    }

    shipVector.push_back(ship);

}

void Student::Galaxy::removeShip(std::shared_ptr<Common::Ship> ship){

    unsigned i = 0;
    while (i < shipVector.size()) {
        if (ship == shipVector[i]) {
            shipVector.erase(shipVector.begin() + i);
            return;
        }
        ++i;
    }

    throw Common::ObjectNotFoundException("Ship does not exist");

}

void Student::Galaxy::addStarSystem(std::shared_ptr<Common::StarSystem> starSystem){

    std::string name = starSystem->getName();
    Common::Point location= starSystem->getCoordinates();
    unsigned Id = starSystem->getId();

    unsigned i = 0;
    while (i < starSystemVector.size()) {
        if (name == starSystemVector[i]->getName() or location == starSystemVector[i]->getCoordinates()
                or Id == starSystemVector[i]->getId()) {
             throw Common::StateException("Starsystem is already added");
        }

        ++i;
    }

    starSystemVector.push_back(starSystem);
}

std::shared_ptr<Student::Galaxy::ShipVector> Student::Galaxy::getShips(){

    std::shared_ptr<ShipVector> ptr (new ShipVector (shipVector));
    return ptr;
}

Common::StarSystem::StarSystemVector Student::Galaxy::getSystemsInRange(std::shared_ptr<Common::StarSystem> origin, int range){

    Common::StarSystem::StarSystemVector starSystemsInRange;
    bool IsOriginInGalaxy = false;

    for (unsigned i = 0; i < starSystemVector.size(); ++i) {

        if (starSystemVector[i] == origin) {
            IsOriginInGalaxy = true;
            continue;
        }

        if (Common::distance (starSystemVector[i]->getCoordinates().x, starSystemVector[i]->getCoordinates().y,
             origin->getCoordinates().x, origin->getCoordinates().y) <= range) {

            starSystemsInRange.push_back(starSystemVector[i]);
        }
    }

    if (IsOriginInGalaxy == false) {
        throw Common::ObjectNotFoundException("Starsystem does not exist");
    }

    else {
        return starSystemsInRange;
    }
}

std::shared_ptr<Common::StarSystem> Student::Galaxy::getRandomSystem(){

    if(starSystemVector.size() > 0){
        return starSystemVector[Common::randomMinMax(0, starSystemVector.size() - 1)];
    }
    else{
        throw Common::ObjectNotFoundException("There are no starsystems");
    }

}

Student::Galaxy::ShipVector Student::Galaxy::getShipsInStarSystem(std::string name){

    Student::Galaxy::ShipVector ships;
    std::shared_ptr<Common::StarSystem> starSystem {Student::Galaxy::getStarSystemByName(name)};//<--hoitaako myös poikkeuksen?

    for(unsigned i = 0; i < shipVector.size(); ++i){
        if(shipVector[i]->getLocation()->getCoordinates() == starSystem->getCoordinates()){
            ships.push_back(shipVector[i]);
        }
    }

    return ships;
}

std::vector<std::string> Student::Galaxy::getSystemNames(){

    std::vector<std::string> systemNames;

    if(starSystemVector.size() > 0){
        for(unsigned i = 0; i < starSystemVector.size(); ++i){
            systemNames.push_back(starSystemVector[i]->getName());
        }
        return systemNames;
    }
    else{
        throw Common::ObjectNotFoundException("There are no starsystems");
    }


}

std::shared_ptr<Common::StarSystem> Student::Galaxy::getStarSystemByName(std::string name){

    std::shared_ptr<Common::StarSystem> starSystem;
    for(unsigned i = 0; i < starSystemVector.size(); ++i){
        if(starSystemVector[i]->getName() == name){
            starSystem = starSystemVector[i];
            return starSystem;
        }
    }

   throw Common::ObjectNotFoundException("Starsystem does not exist");

}

std::shared_ptr<Common::StarSystem> Student::Galaxy::getStarSystemById(unsigned id){

    std::shared_ptr<Common::StarSystem> starSystem;

    for(unsigned i = 0; i < starSystemVector.size(); ++i){
        if(starSystemVector[i]->getId() == id){
            starSystem = starSystemVector[i];
            return starSystem;
        }
    }

    throw Common::ObjectNotFoundException("Starsystem does not exist");

}

Common::StarSystem::StarSystemVector Student::Galaxy::getSystems() {
    return starSystemVector;
}

Common::IGalaxy::ShipVector Student::Galaxy::getShipVector() {
    return shipVector;
}
