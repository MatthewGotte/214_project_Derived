
#include "SpaceCraft.h"

int SpaceCraft::counter;
/**
 * @brief Construct a new Space Craft:: Space Craft object
 * 
 * @param human 
 * @param mission 
 */
SpaceCraft::SpaceCraft(Human* captain, string mission):captain(captain),mission(mission){
    id = counter;
}