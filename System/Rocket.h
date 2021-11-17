
#ifndef __Rocket_h__
#define __Rocket_h__

#include <vector>

#include "SpaceCraft.h"
#include "Falcon9Core.h"
#include "RocketState.h"

using namespace std;

class Rocket
{
public:

    /**
     * @brief Construct a new Rocket object
     * 
     */
    Rocket();

    /**
     * @brief Destroy the Rocket object
     * 
     */
    ~Rocket();

    /**
     * @brief 
     * 
     */
    virtual void nextstage() = 0;

private:

    /**
     * @brief A vector to main maintain and traverse through the Falcon9Coes
     * 
     */
    vector< Falcon9Core* > core;

    /**
     * @brief A referece to SpaceCraft:: SpaceCraft object
     * 
     */
    SpaceCraft* spaceCraft;

    /**
     * @brief A reference to the RocketState:: RocketState object
     * 
     */
    RocketState* stage;

};

#endif