#ifndef DERIVED_FALCONHEAVYBUILDER_H
#define DERIVED_FALCONHEAVYBUILDER_H

#include <iostream>
#include <vector>
#include "Human.h"
#include "Cargo.h"
#include "HumanCollection.h"
#include "CargoCollection.h"
#include "RocketBuilder.h"
#include "Payload.h"
#include "FalconHeavy.h"
#include "FalconHeavyPayload.h"
#include "Propulsion.h"
#include "FalconHeavyPropulsion.h"


class FalconHeavyBuilder : public RocketBuilder 
{
    private:

        FalconHeavy * product;
        CargoCollection * c;
        HumanCollection * h;

    public:

        /**
         * @brief Construct a new Falcon Heavy Builder object
         * @author Derived
         * @param c 
         * @param h 
         */
        FalconHeavyBuilder(CargoCollection * c, HumanCollection * h);

        /**
         * @brief Destroy the Falcon Heavy Builder object
         * @author Derived
         */
        ~FalconHeavyBuilder();

        /**
         * @brief Reset the Falcon Heavy Builder object 
         * @author Derived
         */
        void reset();

        /**
         * @brief Add Paylaod to the Falcon Heavy Builder object
         * @author Derived
         */
        void addPayload();

        /**
         * @brief Add Propulsion to the Falcon Heavy Builder object
         * @author Derived
         */
        void addPropulsion();

        /**
         * @brief Get the Falcon Heavy Rocket object
         * @author Derived
         * @return FalconHeavy* 
         */
        FalconHeavy* getRocket();
};

#endif //DERIVED_FALCONHEAVYBUILDER_H
