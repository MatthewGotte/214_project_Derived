#include "SatelliteTransmissionController.h"
#include "Colours.h"
#include <iostream>
using namespace std;

SatelliteTransmissionController::SatelliteTransmissionController(){}

void SatelliteTransmissionController::notify(StarLinkSatellite* satellite) {

    cout << Colours::blue(satellite->getName() + "StarLinkStaellite changed its connection status ");

    cout << Colours::blue("to " + satellite->getConnection()) << endl; 

    cout << Colours::green("NOTIFYING ALL THE OTHER STARLINK SATELLITES IN ORBIT") << endl;

}

SatelliteTransmissionController::~SatelliteTransmissionController(){}
