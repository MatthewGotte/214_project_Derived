#ifndef SATELLITETRANSMISSION_H
#define SATELLITETRANSMISSION_H

#include <iostream>
#include "Satellite.h"

class Satellite;

using namespace std; 
//Mediator - Controls Communication between Satellites
class SatelliteTransmission
{
    private:

    public:

        /**
         * @brief Construct a new Satellite Transmission object
         * @author Derived
         */
        SatelliteTransmission();

        /**
         * @brief Notify Satellite Transmission
         * @author Derived
         */
        virtual void notify(Satellite*) = 0;
        
        /**
         * @brief Destroy the Satellite Transmission object
         * @author Derived
         */
        ~SatelliteTransmission();

};

#endif