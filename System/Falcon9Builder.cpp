#include "Falcon9Builder.h"
#include "Dragon.h"
#include "Falcon9.h"
/**
 * @brief Construct a new Falcon 9 Builder:: Falcon 9 Builder object
 * @author Derived 
 * @param c 
 */
Falcon9Builder::Falcon9Builder(CargoCollection * c) {
    this->product = nullptr;
    this->c = c;
}
/**
 * @brief Destroy the Falcon 9 Builder:: Falcon 9 Builder object
 * @author Derived 
 */
Falcon9Builder::~Falcon9Builder() {
}
/**
 * @brief set the the builder to null
 * @author Derived 
 */
void Falcon9Builder::reset() {
    this->product = nullptr;
}
/**
 * @brief  addd the payload to the Falcon 9 
 * @author Derived
 */
void Falcon9Builder::addPayload() {
    // VacuumMerlinEngine * v = new VacuumMerlinEngine();
    // this->product->setPayload(new Falcon9Payload(this., v));
    VacuumMerlinEngine * v = new VacuumMerlinEngine();

    SpaceCraft * dragon = new Dragon(this->c);
    Payload * playload = new Falcon9Payload(dragon,v);
    
    this->product = new Falcon9(playload);
}
/**
 * @brief Decorates the payload 
 * @author Derived 
 */
void Falcon9Builder::addPropulsion() {
    //user decorator to decorate the payload here...
    Payload * payload = this->product->getPayload();

    //decorate payload
    Propulsion * propulsion = new Falcon9Propulsion(payload);
    this->product->setPropulsion(propulsion);
}
/**
 * @brief returns the rocket that was built  
 * @author Derived 
 * @return Rocket* 
 */
Rocket * Falcon9Builder::getRocket() {
    return this->product;
}