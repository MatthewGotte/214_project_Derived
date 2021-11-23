#ifndef DERIVED_PAYLOAD_H
#define DERIVED_PAYLOAD_H

#include <iostream>
#include <vector>
#include "VacuumMerlinEngine.h"
#include "SpaceCraft.h"

using namespace std;


class Payload 
{

    private:

        VacuumMerlinEngine * vacmerlinengine;
        SpaceCraft * spacecraft;

    public:

        /**
         * @brief Get the Vacuum Merlin Engine 
         * @author Derived
         * @return VacuumMerlinEngine* 
         */
        VacuumMerlinEngine * getVacuumMerlinEngine();

        /**
         * @brief Set the Vacuum Merlin Engine 
         * @author Derived
         * @param v 
         */
        void setVacuumMerlinEngine(VacuumMerlinEngine * v);

        /**
         * @brief Get the Space Craft object
         * @author Derived
         * @return SpaceCraft* 
         */
        SpaceCraft * getSpaceCraft();

        /**
         * @brief Set the Space Craft 
         * @author Derived
         * @param s 
         */
        void setSpaceCraft(SpaceCraft * s);

        /**
         * @brief Print the Space Craft 
         * @author Derived
         */
        void print();

        /**
         * @brief Construct a new Payload 
         * @author Derived
         * @param s 
         * @param v 
         */
        Payload(SpaceCraft * s, VacuumMerlinEngine * v);

        /**
         * @brief Construct a new Payload object
         * @author Derived
         */
        Payload();

        /**
         * @brief Destroy the Payload object
         * @author Derived
         */
        virtual ~Payload();

        /**
         * @brief Test the Vacuum Merlin Engine 
         * @author Derived
         * @return true 
         * @return false 
         */
        bool testVacuumMerlinEngine();

        /**
         * @brief Launch the Vacuum Merlin Engine 
         * @author Derived
         */
        virtual void launch() = 0;

};

#endif //DERIVED_PAYLOAD_H