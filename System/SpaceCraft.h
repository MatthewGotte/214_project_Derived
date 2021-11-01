
#ifndef __SpaceCraft_h__
#define __SpaceCraft_h__
#include "VacuumMerlinEngine.h"
#include "Collection.h"

class SpaceCraft;

class SpaceCraft
{
private:
    VacuumMerlinEngine* vacuumMerlinEngine;
    Collection * collection;
};

#endif
