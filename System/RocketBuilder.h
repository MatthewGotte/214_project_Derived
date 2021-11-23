#ifndef DERIVED_ROCKETBUILDER_H
#define DERIVED_ROCKETBUILDER_H

#include "Rocket.h"

class RocketBuilder 
{
    public:

        /**
         * @brief Construct a new Rocket Builder object
         * @author Derived
         */
        RocketBuilder();

        /**
         * @brief Destroy the Rocket Builder object
         * @author Derived
         */
        virtual ~RocketBuilder();

        /**
         * @brief Reset the Rocket 
         * @author Derived
         */
        virtual void reset() = 0;

        /**
         * @brief Add Payload to the Rocket 
         * @author Derived
         */
        virtual void addPayload() = 0;

        /**
         * @brief Add Propulsion to the Rocket 
         * @author Derived
         */
        virtual void addPropulsion() = 0;

        /**
         * @brief Get the Rocket oject
         * @author Derived
         * @return Rocket* 
         */
        virtual Rocket * getRocket() = 0;

};

#endif //DERIVED_ROCKETBUILDER_H
