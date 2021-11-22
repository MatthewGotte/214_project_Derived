#ifndef __CrewDragon_h__
#define __CrewDragon_h__

#include "SpaceCraft.h"
#include "HumanCollection.h"
#include "OperationsIteratorHumans.h"

// class SpaceCraft;
class CrewDragon;

class CrewDragon: public SpaceCraft
{
    private:

        HumanCollection * h;
        CargoCollection * c;

    public:

        /**
         * @brief Construct a new Crew Dragon object
         * @author Derived
         * @param c 
         * @param h 
         */
        CrewDragon (CargoCollection * c, HumanCollection * h);

        /**
         * @brief Destroy the Crew Dragon object
         * @author Derived
         */
        ~CrewDragon();

        /**
         * @brief Print the Crew Dragon object
         * @author Derived
         */
        void printSpaceCraft();

};

#endif
