//
// Created by matth on 2021/11/18.
//

#include "Payload.h"

Payload::Payload(VacuumMerlinEngine * v) {
        this->vacmerlinengine = v;
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
