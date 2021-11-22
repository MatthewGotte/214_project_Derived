#ifndef SATELLITETRANSMISSION_H
#define SATELLITETRANSMISSION_H

#include <iostream>
#include "StarLinkSatellite.h"

using namespace std; //Mediator - Controls Communication between Satellites

class SatelliteTransmission
{
    private:

    public:

        virtual void notify(StarLinkSatellite*) = 0;

};

#endif