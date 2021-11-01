
#ifndef __Rocket_h__
#define __Rocket_h__

#include <vector>

#include "SpaceCraft.h"
#include "Falcon9Core.h"

using namespace std;

class Rocket
{
private:
    vector< Falcon9Core* > core;
    SpaceCraft* spaceCraft;
};

#endif