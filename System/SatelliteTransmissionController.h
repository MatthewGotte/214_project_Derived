#ifndef SATELLITETRANSMISSIONCONTROLLER_H
#define SATELLITETRANSMISSIONCONTROLLER_H

#include <iostream>
#include "SatelliteTransmission.h"

using namespace std;

class SatelliteTransmissionController : public SatelliteTransmission
{
    private:

    public:

        /**
         * @brief Construct a new Satellite Transmission Controller object
         * @author Derived
         */
        SatelliteTransmissionController();

        /**
         * @brief Notify Satellite Transmission Controller 
         * @author Derived
         */
        void notify(Satellite*);

        /**
         * @brief Destroy the Satellite Transmission Controller object
         * @author Derived
         */
        ~SatelliteTransmissionController();

};

#endif