
#include "ConfigurationManager.h"

/**
 * @brief Construct a new Configuration Manager:: Configuration Manager object
 * @author Derived 
 * @param c 
 * @param h 
 */
ConfigurationManager::ConfigurationManager(CargoCollection * c, HumanCollection * h) {
    //assign builder
    if (h->isEmpty()) {
        //only cargo => Falcon9Builder
        this->builder = new Falcon9Builder(c);
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