#ifndef DERIVED_PAYLOAD_H
#define DERIVED_PAYLOAD_H

#include <iostream>
#include <vector>

#include "VacuumMerlinEngine.h"
#include "SpaceCraft.h"

using namespace std;


class Payload {
private:
    VacuumMerlinEngine * vacmerlinengine;
    SpaceCraft * spacecraft;

public:
    VacuumMerlinEngine * getVacuumMerlinEngine();
    void setVacuumMerlinEngine(VacuumMerlinEngine * v);

    SpaceCraft * getSpaceCraft();
    void setSpaceCraft(SpaceCraft * s);
    void print();
    Payload(SpaceCraft * s, VacuumMerlinEngine * v);
    Payload();
    virtual ~Payload();

    bool testVacuumMerlinEngine();

    virtual void launch() = 0;
};


#endif //DERIVED_PAYLOAD_H