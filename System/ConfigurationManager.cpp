//
// Created by muzin on 2021/11/09.
//

#include "ConfigurationManager.h"


ConfigurationManager::ConfigurationManager(CargoCollection * c, HumanCollection * h) {
    //assign builder
    if (h->isEmpty()) {
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