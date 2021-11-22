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
    ConfigurationManager(CargoCollection * c, HumanCollection * h);
    ~ConfigurationManager();
    Rocket * BuildAndDecorateRocket();
};


#endif //DERIVED_CONFIGURATIONMANAGER_H
