#ifndef __VacuumMerlinEngine_h__
#define __VacuumMerlinEngine_h__

#include "Engine.h"

// class Engine;
class VacuumMerlinEngine;

class VacuumMerlinEngine: public Engine
{
public:
    VacuumMerlinEngine();
    VacuumMerlinEngine * clone();
    ~VacuumMerlinEngine();
private:
    static int counter;
    int id;
};

#endif
