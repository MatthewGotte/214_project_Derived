#ifndef __LaunchMode_h__
#define __LaunchMode_h__

#include "Simulation.h"

class LaunchMode 
{
    private:

        Simulation * receiver;

    public:

        /**
         * @brief Construct a new Launch Mode object
         * @author Derived
         * @param obj 
         */
        LaunchMode(Simulation * obj);

        /**
         * @brief Execture Launch Mode 
         * @author Derived
         */
        void execute();

        /**
         * @brief Return Launch Mode Receiver
         * @author Derived
         * @return Simulation* 
         */
        Simulation * getR();

};

#endif
