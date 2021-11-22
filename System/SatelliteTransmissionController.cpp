#include "SatelliteTransmissionController.h"
#include "Colours.h"

SatelliteTransmissionController::SatelliteTransmissionController(){}

void SatelliteTransmissionController::notify(Satellite* satellite) {  

    cout << Colours::blue("StarLinkSatellite changed its connection status to " + satellite->getConnection()) << endl;

    cout << Colours::green("NOTIFYING ALL THE OTHER STARLINK SATELLITES IN ORBIT") << endl;

}

SatelliteTransmissionController::~SatelliteTransmissionController(){}
