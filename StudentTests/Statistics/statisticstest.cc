
#include <QString>
#include <iostream>
#include <memory>
#include <QtTest>
#include "statistics.hh"
#include "stateexception.hh"

class StatisticsTest : public QObject
{
    Q_OBJECT

public:
    StatisticsTest();

private Q_SLOTS:
    void testCase1();

    void init();
    void testConstructor();

    void testAddSavedShip();

    void testAddLostShip();

    void testAddPoints();
    void testReducePoints();

    void testAddCredits();
    void testReduceCredits();

    void testResetStatistics();

private:
    std::shared_ptr<Student::Statistics> statistics_;

};

StatisticsTest::StatisticsTest()
{
}

void StatisticsTest::init(){
    statistics_.reset();
    statistics_ = std::make_shared<Student::Statistics>();
}

void StatisticsTest::testConstructor(){
    QVERIFY2(statistics_->getSavedShips() == 0 && statistics_->getLostShips() == 0
             && statistics_->getCreditBalance() == 0 && statistics_->getPoints() == 0,
             "There should be no saved ships, lost ships, credit or points when Statistics is created.");
}

void StatisticsTest::testAddSavedShip(){
    unsigned savedShips = statistics_->getSavedShips();
    statistics_->addSavedShip();
    QVERIFY2(statistics_->getSavedShips() == savedShips + 1, "Saved ship was not added.");
}


void StatisticsTest::testAddLostShip(){
    unsigned lostShips = statistics_->getLostShips();
    statistics_->addLostShip();
    QVERIFY2(statistics_->getLostShips() == lostShips + 1, "Lost ship was not added.");
}


void StatisticsTest::testAddPoints(){
    unsigned points = statistics_->getPoints();
    for(int i = 0; i < 5; i++){
        points += i;
        statistics_->addPoints(i);
        QVERIFY2(statistics_->getPoints() == points, "Points were not added.");
    }
}

void StatisticsTest::testReducePoints(){
    statistics_->addPoints(3);
    statistics_->reducePoints(2);

    QVERIFY2(statistics_->getPoints() == 1, "Points were not reduced");
    QVERIFY_EXCEPTION_THROWN(statistics_->reducePoints(2), Common::StateException);
}


void StatisticsTest::testAddCredits(){
    unsigned credits = statistics_->getCreditBalance();
    for(int i = 0; i < 5; i++){
        credits += i;
        statistics_->addCredits(i);
        QVERIFY2(statistics_->getCreditBalance() == credits, "Credit was not added.");
    }
}

void StatisticsTest::testReduceCredits(){
    statistics_->addCredits(3);
    statistics_->reduceCredits(2);
    QVERIFY2(statistics_->getCreditBalance() == 1, "Credit was not reduced");
    QVERIFY_EXCEPTION_THROWN(statistics_->reduceCredits(2), Common::StateException);
}


void StatisticsTest::testResetStatistics(){
    statistics_->addCredits(5);
    statistics_->addLostShip();
    statistics_->addPoints(5);
    statistics_->addSavedShip();

    statistics_->reset();

    QVERIFY2(statistics_->getSavedShips() == 0 && statistics_->getLostShips() == 0
             && statistics_->getCreditBalance() == 0 && statistics_->getPoints() == 0,
             "Reset failed");
}

void StatisticsTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(StatisticsTest)

#include "statisticstest.moc"
