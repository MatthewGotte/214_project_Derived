
#ifndef __SpaceCraft_h__
#define __SpaceCraft_h__
#include "VacuumMerlinEngine.h"
#include "Collection.h"

class SpaceCraft;

class SpaceCraft
{
private:

    /**
     * @brief Create a reference to VacuumMerlinEngine:: vacuumMerlinEngine
     * 
     */
    VacuumMerlinEngine* vacuumMerlinEngine;

    /**
     * @brief Create a reference to Collection 
     * 
     */
    Collection * collection;
};

#endif
