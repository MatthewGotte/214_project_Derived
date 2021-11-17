
#ifndef __Satellite_h__
#define __Satellite_h__
#include "VacuumMerlinEngine.h"
#include <iostream>
using namespace std; //Observer
class Satellite
{
    private:

        /**
         * @brief Create a reference to VacuumMerlinEngine:: vacuumMerlinEngine
         * 
         */
        VacuumMerlinEngine* vacuumMerlinEngine;

    public:

        /**
         * @brief Construct a new Satellite object
         * 
         */
        Satellite();

        
        void update();

        /**
         * @brief Destroy the Satellite object
         * 
         */
        ~Satellite();
};

#endif
