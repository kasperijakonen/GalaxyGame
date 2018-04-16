#ifndef STATISTICS_HH
#define STATISTICS_HH

#include "istatistics.hh"


namespace Student {

class Statistics : public Common::IStatistics
{
public:
    Statistics();
    virtual ~Statistics();

     void addSavedShip();
     unsigned getSavedShips() const;

     void addLostShip();
     unsigned getLostShips() const;

     void addPoints(unsigned amount);
     void reducePoints(unsigned amount);
     unsigned getPoints() const;

     void addCredits(unsigned amount);
     void reduceCredits(unsigned amount);
     int getCreditBalance() const;

     void reset();

private:

     unsigned savedShips_ = 0;
     unsigned lostShips_ = 0;
     unsigned points_ = 0;
     int credits_  = 0;



};
}//Student

#endif // STATISTICS_HH
