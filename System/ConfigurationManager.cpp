#include "ConfigurationManager.h"
#include <stdexcept>
/**
 * @brief Construct a new Configuration Manager:: Configuration Manager object
 * @author Derived 
 * @param c 
 * @param h 
 */
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
/**
 * @brief Destroy the Configuration Manager:: Configuration Manager object
 * @author Derived 
 */
ConfigurationManager::~ConfigurationManager() {

}
/**
 * @brief used to build and decorate the complex system of a rocket 
 * @author Derived 
 * @return Rocket* 
 */
Rocket * ConfigurationManager::BuildAndDecorateRocket() {
    this->builder->reset();
    this->builder->addPayload();
    this->builder->addPropulsion();
    return this->builder->getRocket();
}