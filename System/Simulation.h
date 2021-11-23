#ifndef __Simulation_h__
#define __Simulation_h__

#include "AllHeaders.h"

class Simulation
{
    private:

        HumanCollection * voh ; //vector of humans.
        CargoCollection * voc ; //vecotre of cargor.
        ConcreteGroundMissionControl * groundMissionControl; 
        Rocket* dogeToMoon;
        int send;

    public:

        /**
         * @brief Construct a new Simulation object
         * @author Derived
         */
        Simulation();

        /**
         * @brief Destroy the Simulation object
         * @author Derived
         */
        ~Simulation();
        
        /**
         * @brief Setup Simulation
         * @author Derived
         */
        void setup();

        /**
         * @brief Lift Off Simulation
         * @author Derived
         */
        void liftOff();

        /**
         * @brief Static Fire Simulation
         * @author Derived
         */
        void staticFire();

        /**
         * @brief Test that Fails Simulation
         * @author Derived
         */
        void testThatFails();

};

#endif
