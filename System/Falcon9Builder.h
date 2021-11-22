#ifndef DERIVED_FALCON9BUILDER_H
#define DERIVED_FALCON9BUILDER_H

#include <iostream>
#include <vector>
#include "RocketBuilder.h"
#include "Cargo.h"
#include "CargoCollection.h"
#include "Falcon9Payload.h"
#include "Falcon9Propulsion.h"

class Falcon9Builder : public RocketBuilder 
{
    private:

        Rocket * product;
        CargoCollection * c;

    public:

        /**
         * @brief Construct a new Falcon 9 Builder object
         * @author Derived
         * @param c 
         */
        Falcon9Builder(CargoCollection * c);

        /**
         * @brief Destroy the Falcon 9 Builder object
         * @author Derived
         */
        ~Falcon9Builder();

        /**
         * @brief Reset the Falcon 9 Builder object
         * @author Derived
         */
        void reset();

        /**
         * @brief Add Payload to the Falcon 9 Builder object
         * @author Derived
         */
        void addPayload();

        /**
         * @brief Add Propulsion to the Falcon 9 Builder object
         * @author Derived
         */
        void addPropulsion();

        /**
         * @brief Get the  Falcon 9 Builder object
         * @author Derived
         * @return Rocket* 
         */
        Rocket * getRocket();

};

#endif //DERIVED_FALCON9BUILDER_H
