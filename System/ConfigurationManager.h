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

    /**
     * @brief Create a reference to RocketBuilder 
     * 
     */
    RocketBuilder* builder;

public:

    /**
     * @brief Construct a new Configuration Manager object
     * 
     * @param c 
     * @param h 
     */
    ConfigurationManager(vector< Cargo* > c, vector< Human* > h) {
        //assign builder
        if (h.empty()) {
            //only cargo => Falcon9Builder
            this->builder = new Falcon9Builder(c);
        }
        //humans and cargo => FalconHeavyBuilder
        this->builder = new FalconHeavyBuilder(c, v);
    }

    /**
     * @brief Destroy the Configuration Manager object
     * 
     */
    ~ConfigurationManager();

};


#endif //DERIVED_CONFIGURATIONMANAGER_H
