
#ifndef __Satellite_h__
#define __Satellite_h__
#include "VacuumMerlinEngine.h"

#include <iostream>
#include <string>

using namespace std; //Observer

class Satellite
{
    private:

        VacuumMerlinEngine* vacuumMerlinEngine;

        string name;

    public:

        Satellite();

        virtual void update() = 0;

        virtual void print() = 0;

        ~Satellite();
};

#endif
