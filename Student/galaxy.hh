#ifndef GALAXY_HH
#define GALAXY_HH

#include <memory>
#include "igalaxy.hh"
#include "ship.hh"
#include "starsystem.hh"
#include "ieventhandler.hh"
#include "stateexception.hh"
#include "objectnotfoundexception.hh"
#include "starsystem.hh"
#include "point.hh"

namespace Student {

class Galaxy : public Common::IGalaxy, public std::enable_shared_from_this<Galaxy>
{
public:
    Galaxy();
    ~Galaxy();
    virtual void addShip(std::shared_ptr<Common::Ship> ship);
    virtual void removeShip(std::shared_ptr<Common::Ship> ship);
    virtual void addStarSystem(std::shared_ptr<Common::StarSystem> starSystem);

    virtual std::shared_ptr<ShipVector> getShips();

    virtual Common::StarSystem::StarSystemVector getSystemsInRange
        (std::shared_ptr<Common::StarSystem> origin, int range);
    virtual std::shared_ptr<Common::StarSystem> getRandomSystem();

    ShipVector getShipsInStarSystem(std::string name);
    std::vector<std::string> getSystemNames();
    std::shared_ptr<Common::StarSystem> getStarSystemByName(std::string name);
    std::shared_ptr<Common::StarSystem> getStarSystemById(unsigned id);

    Common::StarSystem::StarSystemVector getSystems();
    ShipVector getShipVector();

private:
    ShipVector shipVector;
    Common::StarSystem::StarSystemVector starSystemVector;
};
}//Student

#endif // GALAXY_HH
