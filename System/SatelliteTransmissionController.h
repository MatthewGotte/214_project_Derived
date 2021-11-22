#ifndef SATELLITETRANSMISSIONCONTROLLER_H
#define SATELLITETRANSMISSIONCONTROLLER_H

#include <iostream>
#include "SatelliteTransmission.h"
using namespace std;

class SatelliteTransmissionController : public SatelliteTransmission
{
    private:

    public:

        SatelliteTransmissionController();

        void notify(Satellite*);

        ~SatelliteTransmissionController();

};

#endif