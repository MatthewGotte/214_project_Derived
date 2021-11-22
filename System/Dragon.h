#ifndef __Dragon_h__
#define __Dragon_h__

#include "SpaceCraft.h"
#include "CargoCollection.h"

class Dragon: public SpaceCraft
{
    private:

        CargoCollection * c;

    public:

        /**
         * @brief Construct a new Dragon object
         * @author Derived
         * @param c 
         */
        Dragon (CargoCollection * c);

        /**
         * @brief Destroy the Dragon object
         * @author Derived
         */
        ~Dragon();

        /**
         * @brief Print the Dragon object
         * @author Derived
         */
        void printSpaceCraft();
};

#endif
