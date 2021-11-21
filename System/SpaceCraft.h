#ifndef __SpaceCraft_h__
#define __SpaceCraft_h__

#include "VacuumMerlinEngine.h"
#include "Human.h"
#include "CargoCollection.h"
#include <string>
class SpaceCraft;

class SpaceCraft
{
private:
    static int counter;
    int id;
    string mission;
    Human* captain;
    CargoCollection * c;
public:
    SpaceCraft(CargoCollection * c);
    virtual ~SpaceCraft();

    void setCargoCollection(CargoCollection * c);
    CargoCollection * getCargoCollection();

    virtual void printSpaceCraft()=0; //to be re-impliment in the CrewDragon
};

#endif