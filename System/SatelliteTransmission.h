#ifndef SATELLITETRANSMISSION_H
#define SATELLITETRANSMISSION_H

#include <iostream>
#include "Satellite.h"
class Satellite;

using namespace std; //Mediator - Controls Communication between Satellites

class SatelliteTransmission
{
    private:

    public:

        SatelliteTransmission();

        virtual void notify(Satellite*) = 0;

        ~SatelliteTransmission();
};

#endif