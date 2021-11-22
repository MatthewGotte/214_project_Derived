#include "Colours.h"
#include "Rocket.h"
/**
 * @brief Construct a new Rocket:: Rocket object
 * @author Derived 
 * @param payload 
 */
Rocket::Rocket(Payload * payload) {
    this->payload = payload;
    readytolaunch = false;
    hasbeentested = false;
}
/**
 * @brief Destroy the Rocket:: Rocket object
 * @author Derived  
 */
Rocket::~Rocket(){
    delete stage;
    delete payload->getSpaceCraft();
    delete payload;
}
/**
 * @brief Sets the Payload object.
 * @author Derived 
 * @param p 
 */
void Rocket::setPayload(Payload * p) {
    this->payload = p;
}   
/**
 * @brief Returns the Payload object.
 * @author Derived  
 * @return Payload* 
 */
Payload * Rocket::getPayload() {
    return this->payload;
}
/**
 * @brief prints the contents of the Payload object.
 * @author Derived  
 */
void Rocket::print(){
    
    cout << Colours::red("rocket is trying to print") << endl;
    this->payload->print();
}
/**
 * @brief sets the stage of the Rocket.
 * @author Derived 
 * @param state 
 */
void Rocket::setState(RocketState *state){
    stage = state;
}
/**
 * @brief sets the propulsion of the rocket.
 * @author Derived 
 * @param p 
 */
void Rocket::setPropulsion(Propulsion * p) {
    propulsion = p;
}

/**
 * @brief this removes the propulsion system.
 * @author Derived
 */
void Rocket::nextstage(){
    delete propulsion;
    propulsion = nullptr;
}

/**
 * @brief sets the name of the rocket
 * @author Derived
 */
void Rocket::setName(string name){
    this->name = name;
}

/**
 * @brief check the launch flags and will call launch on the decorated payload's propulsion system
 * @author Derived
 */
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



    for (int i = 0; i < 70; i++) {

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