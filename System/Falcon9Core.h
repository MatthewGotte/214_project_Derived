
#ifndef __Falcon9Core_h__
#define __Falcon9Core_h__

#include "Core.h"
class MerlinEngine;
#include <vector>
#include <iostream>
using namespace std;
class Falcon9Core;

class Falcon9Core: public Core
{
private:

    /**
     * @brief keeps count of the MerlinEngines
     * 
     */
    int merlinengines;

    /**
     * @brief uses a vector to maintain and traverse through the engines
     * 
     */
    vector<MerlinEngine*> engines;


public:

    
    /**
     * @brief Return the count of all the Merlin Engines added to the list
     * 
     * @return int 
     */
    int getMerlinNumber();

    
    /**
     * @brief Clone and return a new Falcon9Core:: new Falcon 9 Object 
     * 
     * @return Falcon9Core* 
     */
    Falcon9Core* clone();

    /**
     * @brief Add a new merlin engine to the list of merline engines:: Engine object
     * 
     * @param engine 
     */
    void addEngine(MerlinEngine*);

};

#endif
