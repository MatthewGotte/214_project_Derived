
#ifndef __FalconHeavy_h__
#define __FalconHeavy_h__

#include <vector>
#include "Rocket.h"

using namespace std;

// class Rocket;
class FalconHeavy;

class FalconHeavy: public Rocket
{
private:
    vector< Falcon9Core* > cores;
};

#endif
