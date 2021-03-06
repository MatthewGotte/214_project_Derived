#include "ConfigurationManager.h"
#include <stdexcept>

ConfigurationManager::ConfigurationManager(CargoCollection * c, HumanCollection * h) {
    //assign builder
    if (c->isEmpty()) {
        throw std::invalid_argument("Cargo Always has to Have something");
        return;
    }
    if (h->isEmpty()) {
        //only cargo => Falcon9Builder
        this->builder = new Falcon9Builder(c);
        return;
    }
    //humans and cargo => FalconHeavyBuilder
    this->builder = new FalconHeavyBuilder(c, h);   
}

ConfigurationManager::~ConfigurationManager() {
    delete this->builder;
}

Rocket * ConfigurationManager::BuildAndDecorateRocket() {
    this->builder->reset();
    this->builder->addPayload();
    this->builder->addPropulsion();
    return this->builder->getRocket();
}