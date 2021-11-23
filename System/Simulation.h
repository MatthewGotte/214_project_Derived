#ifndef __Simulation_h__
#define __Simulation_h__

#include "AllHeaders.h"

class Simulation
{
    private:

        HumanCollection * voh = new VectorOfHumans(); //vector of humans.
        CargoCollection * voc = new VectorOfCargo(); //vecotre of cargor.
        Rocket* dogeToMoon;

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
