#ifndef __Rocket_h__
#define __Rocket_h__

#include <vector>
#include "SpaceCraft.h"
#include "Falcon9Core.h"
#include "RocketState.h"

using namespace std;

class Rocket
{
public:
    Rocket();
    ~Rocket();


    virtual void nextstage()=0;
private:
    vector< Falcon9Core* > core;
    SpaceCraft* spaceCraft;
    RocketState* stage;
};

#endif