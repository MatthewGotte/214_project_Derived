
#ifndef __VacuumMerlinEngine_h__
#define __VacuumMerlinEngine_h__

#include "Engine.h"

// class Engine;
class VacuumMerlinEngine;

class VacuumMerlinEngine: public Engine
{
public:

    /**
     * @brief Construct a new Vacuum Merlin Engine object
     * 
     */
    VacuumMerlinEngine();

    /**
     * @brief Clone a VacuumMerlinEngine
     * 
     * @return VacuumMerlinEngine* 
     */
    VacuumMerlinEngine * clone();
};

#endif
