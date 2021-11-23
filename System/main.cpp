#include <iostream>

#include "AllHeaders.h"
#include "test.cpp"
#include <gtest/gtest.h>
#include "SatelliteTransmissionController.h"
#include "Simulation.h"
#include "LaunchMode.h"


using namespace std;

int main(int argc , char ** argv ) {
    Simulation * sim = new Simulation();
    sim->setup();
    LaunchMode * launch = new LaunchMode(sim);
    launch->execute();

    delete launch;
    delete sim;
    return 0;
}

void Hloni() {

    //Testing Communication between StarLink Satellites and GroundMissionControl - Observer
    //sls1 - StarLinkSatellite 1
    //cmgc - ConcreteGroundMissionControl
    cout << endl; 
    
    cout <<Colours::yellow("Testing Communication between StarLink Satellites and GroundMissionControl") << endl;

    ConcreteGroundMissionControl* cgmc = new ConcreteGroundMissionControl();

    StarLinkSatellite* sls1 = new StarLinkSatellite(cgmc);
    sls1->print();
    cgmc->notify();

    cgmc->attach(sls1);
    cgmc->setConnection(true);
    cgmc->notify();

    sls1->print();

    cout << endl;

    //Testing Communication between StarLinkSatellites in orbit and SatelliteTransmission as the mediator - Mediator

    cout << Colours::yellow("Testing Communication between between StarLink Satellites and the mediator - SatelliteTransmission") << endl;

    sls1->setConnection("Connected");


    SatelliteTransmissionController* alert = new SatelliteTransmissionController();

    alert->notify(sls1);

    cout << endl;

    //Delete memory

    delete cgmc;
    delete sls1;

}
