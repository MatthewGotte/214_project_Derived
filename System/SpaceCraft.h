
#ifndef __SpaceCraft_h__
#define __SpaceCraft_h__
#include "VacuumMerlinEngine.h"
#include "Human.h"
#include "Collection.h"
#include <string>
class SpaceCraft;

class SpaceCraft
{
    SpaceCraft(Human* captain,string mission);
    
private:
    static int counter;
    int id;
    string mission;
    Human* captain;
    Collection * collection;
};

#endif