#include <iostream>

#include "AllHeaders.h"
#include "Test.cpp"
#include <gtest/gtest.h>
#include "SatelliteTransmissionController.h"
#include "Simulation.h"
#include "LaunchMode.h"


using namespace std;


int main(int argc , char ** argv ) {
    // google test

    // testing::InitGoogleTest(&argc, argv);
    // return RUN_ALL_TESTS();

    //simulation. code
    Simulation * sim = new Simulation();
    sim->setup();
    LaunchMode * launch = new LaunchMode(sim);
    launch->execute();

    delete launch;
    delete sim;
    return 0;

 
}
