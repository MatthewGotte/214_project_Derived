#ifndef DERIVED_CONFIGURATIONMANAGER_H
#define DERIVED_CONFIGURATIONMANAGER_H

#include <iostream>
#include <vector>
#include "RocketBuilder.h"
#include "Human.h"
#include "Cargo.h"
#include "HumanCollection.h"
#include "CargoCollection.h"
#include "Falcon9Builder.h"
#include "FalconHeavyBuilder.h"

class ConfigurationManager {
    private:

        RocketBuilder * builder;

    public:

        /**
         * @brief Construct a new Configuration Manager object
         * @author Derived
         * @param c 
         * @param h 
         */
        ConfigurationManager(CargoCollection * c, HumanCollection * h);

        /**
         * @brief Destroy the Configuration Manager object
         * @author Derived
         */
        ~ConfigurationManager();
        Rocket * BuildAndDecorateRocket();

};

#endif //DERIVED_CONFIGURATIONMANAGER_H
