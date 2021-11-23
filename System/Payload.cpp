#include "Payload.h"
#include "Colours.h"

Payload::Payload(SpaceCraft *s, VacuumMerlinEngine * v) {
        this->vacmerlinengine = v;
        this->spacecraft = s;
}

Payload::~Payload(){
    delete this->vacmerlinengine;
}

VacuumMerlinEngine * Payload::getVacuumMerlinEngine() {
    return this->vacmerlinengine;
}

void Payload::setVacuumMerlinEngine(VacuumMerlinEngine * v) {
    this->vacmerlinengine = v;
}

SpaceCraft * Payload::getSpaceCraft() {
    return this->spacecraft;
}

void Payload::setSpaceCraft(SpaceCraft * s) {
    this->spacecraft = s;
}

void Payload::print() {
    this->spacecraft->printSpaceCraft();
}

Payload::Payload() {

}

bool Payload::testVacuumMerlinEngine() {
    srand((unsigned) time(0));
    int r = rand() % 100;
    //test if in range of 94% success of a rocket launch:
    if ((0<=r) && (r<=3)) {
        return false; //failed
    }
    return true; //success
}
