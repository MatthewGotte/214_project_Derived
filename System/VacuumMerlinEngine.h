#ifndef __VacuumMerlinEngine_h__
#define __VacuumMerlinEngine_h__

#include "Engine.h"

// class Engine;
class VacuumMerlinEngine;

class VacuumMerlinEngine: public Engine
{

    private:

        static int counter;
        int id;

    public:

        /**
         * @brief Construct a new Vacuum Merlin Engine object
         * @author Derived
         */
        VacuumMerlinEngine();

        /**
         * @brief Clone the Vacuum Merlin Engine object
         * @author Derived
         * @return VacuumMerlinEngine* 
         */
        VacuumMerlinEngine * clone();

        /**
         * @brief Destroy the Vacuum Merlin Engine object
         * @author Derived
         */
        ~VacuumMerlinEngine();

};

#endif
