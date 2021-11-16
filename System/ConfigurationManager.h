#ifndef DERIVED_CONFIGURATIONMANAGER_H
#define DERIVED_CONFIGURATIONMANAGER_H

#include "RocketBuilder.h"
#include <iostream>
#include <vector>
#include "Human.h"
#include "Cargo.h"
#include "Falcon9Builder.h"
#include "FalconHeavyBuilder.h"

/*
 * Configuration manager serves as the director of the builder pattern.
 * Holds a pointer to a RocketBuilder.
 */

class ConfigurationManager {
private:
    RocketBuilder * builder;
public:
    ConfigurationManager(vector< Cargo* > c, vector< Human* > h) {
        //assign builder
        if (h.empty()) {
            //only cargo => Falcon9Builder
            this->builder = new Falcon9Builder(c);
        }
        //humans and cargo => FalconHeavyBuilder
        this->builder = new FalconHeavyBuilder(c, h);   
    }
    ~ConfigurationManager();

};


#endif //DERIVED_CONFIGURATIONMANAGER_H
