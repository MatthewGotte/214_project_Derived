#ifndef __Satellite_h__
#define __Satellite_h__

#include <iostream>
#include <string>
#include "VacuumMerlinEngine.h"
class SatelliteTransmission;

using namespace std; //Observer, Colleague

class Satellite
{
    private:

        VacuumMerlinEngine* vacuumMerlinEngine;

        SatelliteTransmission* mediator;

        string name;

    public:

        Satellite();

        void ConnectionChanged();

        virtual string getConnection();

        virtual void setConnction(string);

        virtual void update() = 0;

        virtual void print() = 0;

        ~Satellite();
};

#endif
