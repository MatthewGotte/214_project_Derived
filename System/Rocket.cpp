#include "Colours.h"
#include "Rocket.h"
#include <unistd.h>
#include <cstdlib>

Rocket::Rocket(Payload * payload) {
    this->payload = payload;
    readytolaunch = false;
    hasbeentested = false;
}

Rocket::~Rocket(){
    delete stage;
    delete payload->getSpaceCraft();
    delete payload;
}

void Rocket::setPayload(Payload * p) {
    this->payload = p;
}   

Payload * Rocket::getPayload() {
    return this->payload;
}

void Rocket::print(){
    cout << Colours::red("rocket is trying to print") << endl;
    this->payload->print();
}

void Rocket::setState(RocketState *state) {
    stage = state;
}

void Rocket::setPropulsion(Propulsion * p) {
    propulsion = p;
}

void Rocket::nextstage() {
    delete propulsion;
    propulsion = nullptr;
}

void Rocket::setName(string name) {
    this->name = name;
}

void Rocket::launch() {
    //check flag tested
    if (!hasbeentested) {
        cout << Colours::red("WARNING: " + name + " must be tested before a launch.");
        return;
    }
    //check flag ready
    if (!readytolaunch) {
        cout << Colours::red("WARNING: " + name + " must pass testing before a launch.");
        return;
    }
    
    cout << Colours::yellow(name + " is starting it's launch.");

    this->propulsion->launch();

    cout << Colours::yellow(name + " is starting it's launch.");

    for (int i = 0; i < 70; i+=5) {
        cout<<"sleeping "<<endl;
        sleep(0.5);
    }
}

void Rocket::testRocket() {
    hasbeentested = true;
    bool vmetest = testVacuumMerlinEngine();
    if (!vmetest) {
        cout << Colours::red("FAILURE: " + name + "'s VacuumMerlinEngine failed the test.");
    }
    bool proptest = testPropulsion();
    if (!proptest) {
        cout << Colours::red("FAILURE: " + name + "'s PropulsionSystem failed the test.");
    }
    if (vmetest && proptest) {
        readytolaunch = true;
        return;
    }
    readytolaunch = false;
}

bool Rocket::testVacuumMerlinEngine() {
    return this->payload->testVacuumMerlinEngine();
}

bool Rocket::testPropulsion() {
    return this->propulsion->testPropulsion();
}