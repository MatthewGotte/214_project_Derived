#ifndef __Satellite_h__
#define __Satellite_h__

#include <iostream>
#include <string>
#include "VacuumMerlinEngine.h"
#include "SatelliteTransmission.h"
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

        virtual string getConnection() = 0;

        virtual void setConnection(string) = 0;

        virtual void update() = 0;

        virtual void print() = 0;

        ~Satellite();
};

#endif
