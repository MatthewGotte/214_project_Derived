#ifndef DERIVED_PROPULSION_H
#define DERIVED_PROPULSION_H

#include "Payload.h"

class Propulsion : public Payload 
{

    private:

    public:

        /**
         * @brief Construct a new Propulsion object
         * @author Derived
         */
        Propulsion();

        /**
         * @brief Destroy the Propulsion object
         * @author Derived
         */
        virtual ~Propulsion();

        /**
         * @brief Land the Propulsion 
         * @author Derived
         */
        virtual void land()=0;

        /**
         * @brief Test the Propulsion
         * @author Derived
         * @return true 
         * @return false 
         */
        bool testPropulsion();

};

#endif //DERIVED_PROPULSION_H
