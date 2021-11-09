
#ifndef __Satellite_h__
#define __Satellite_h__
#include "VacuumMerlinEngine.h"
#include <iostream>
using namespace std; //Observer
class Satellite
{
    private:

        VacuumMerlinEngine* vacuumMerlinEngine;



    public:

        Satellite();

        void update();

        ~Satellite();
};

#endif
