//
// Created by muzin on 2021/11/09.
//

#include "ConfigurationManager.h"


ConfigurationManager::ConfigurationManager(vector< Cargo* > c, vector< Human* > h) {
    //assign builder
    if (h.empty()) {
        //only cargo => Falcon9Builder
        this->builder = new Falcon9Builder(c);
    }
    //humans and cargo => FalconHeavyBuilder
    this->builder = new FalconHeavyBuilder(c, h);   
}

ConfigurationManager::~ConfigurationManager() {

}

Rocket * ConfigurationManager::BuildAndDecorateRocket() {
    this->builder->reset();
    this->builder->addPayload();
    this->builder->addPropulsion();
    return this->builder->getRocket();
}