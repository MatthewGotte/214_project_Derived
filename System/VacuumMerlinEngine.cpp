#include "VacuumMerlinEngine.h"
#include "Engine.h"

int VacuumMerlinEngine::counter = 1000;

VacuumMerlinEngine *VacuumMerlinEngine::clone() {
    return new VacuumMerlinEngine();
}

VacuumMerlinEngine::VacuumMerlinEngine() {
    id = ++counter;
}

VacuumMerlinEngine::~VacuumMerlinEngine(){

}


