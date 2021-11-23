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
    
    cout << Colours::yellow(this->getName()+ " is starting it's launch.") << endl;

    this->propulsion->launch();

    cout << Colours::yellow(this->getName() + " is ready for launch counting down.") << endl;
    for(int i=10; i>0; i--){
        sleep(1);
        cout<<Colours::green(to_string(i))<<endl;
    }
    
    for (int i = 0; i <= 70; i+=5) {
        sleep(1);
        if (i==0) {
            cout << Colours::purple("The "+this->getName()+" has made it off the launch pad.") << endl;
        }
        else
            cout << Colours::purple("The "+this->getName()+" is now ") << Colours::purple(to_string(i)) << Colours::purple(" km away from earth.") << endl;
    }
    cout << Colours::blue("The "+this->getName() + " has succesfully reached orbit, detaching cores and moving to stage 2") << endl;
    sleep(1);

    nextstage();

}

void Rocket::testRocket() {
    hasbeentested = true;
    bool vmetest = testVacuumMerlinEngine();
    if (!vmetest) {
        cout << Colours::red("FAILURE: " + name + "'s VacuumMerlinEngine failed the test.") <<endl;
    }
    bool proptest = testPropulsion();
    if (!proptest) {
        cout << Colours::red("FAILURE: " + name + "'s PropulsionSystem failed the test.") <<endl;
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

void Rocket::testThatFails(){
    hasbeentested = true;

    bool vmetest = true;
    bool proptest = true;

    srand(time(0));
    if(rand()%2){
        proptest = false;
    }
    else{
        vmetest = false;
    }

    if (!vmetest) {
        cout << Colours::red("FAILURE: " + name + "'s VacuumMerlinEngine failed the test.") <<endl;
    }
    
    if (!proptest) {
        cout << Colours::red("FAILURE: " + name + "'s PropulsionSystem failed the test.") <<endl;
    }
    if (vmetest && proptest) {
        readytolaunch = true;
        return;
    }
    readytolaunch = false;
}