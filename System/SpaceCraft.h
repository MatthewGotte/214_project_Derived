#ifndef __SpaceCraft_h__
#define __SpaceCraft_h__

#include <string>
#include "VacuumMerlinEngine.h"
#include "Human.h"
#include "CargoCollection.h"

class SpaceCraft;

class SpaceCraft
{
    private:

        static int counter;
        int id;
        string mission;
        Human* captain;
        CargoCollection * c;

    public:

        /**
         * @brief Construct a new Space Craft object
         * @author Derived
         * @param c 
         */
        SpaceCraft(CargoCollection * c);

        /**
         * @brief Destroy the Space Craft object
         * @author Derived
         */
        virtual ~SpaceCraft();

        /**
         * @brief Set the Cargo Collection
         * @author Derived
         * @param c 
         */
        void setCargoCollection(CargoCollection * c);

        /**
         * @brief Get the Cargo Collection
         * @author Derived
         * @return CargoCollection* 
         */
        CargoCollection * getCargoCollection();

        /**
         * @brief  Print Space Crafts in Collection
         * @author Derived
         */
        virtual void printSpaceCraft()=0; //to be re-impliment in the CrewDragon
};

#endif