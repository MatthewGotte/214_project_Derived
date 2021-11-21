
#ifndef __CrewDragon_h__
#define __CrewDragon_h__

#include "SpaceCraft.h"
#include "HumanCollection.h"
#include "OperationsIteratorHumans.h"

// class SpaceCraft;
class CrewDragon;

class CrewDragon: public SpaceCraft
{
private:
    HumanCollection * h;
    CargoCollection * c;
public:
    CrewDragon (CargoCollection * c, HumanCollection * h);
    ~CrewDragon();

    void printSpaceCraft();
};

#endif
