#include "FalconHeavyBuilder.h"

/**
 * @brief Construct a new Falcon Heavy Builder:: Falcon Heavy Builder object
 * @author Derived
 * @param c 
 * @param h 
 */
FalconHeavyBuilder::FalconHeavyBuilder(CargoCollection * c, HumanCollection * h) {
    this->product = nullptr;
    this->c = c;
    this->h = h;
}
/**
 * @brief Destroy the Falcon Heavy Builder:: Falcon Heavy Builder objectf
 * @author Derived
 */
FalconHeavyBuilder::~FalconHeavyBuilder() {


}
/**
 * @brief Sets the product objcet to null.
 * @author Derived
 */
void FalconHeavyBuilder::reset() {
    this->product = nullptr;
}
/**
 * @brief adds the Playload to the product.
 * @author Derived 
 */
void FalconHeavyBuilder::addPayload() {
    VacuumMerlinEngine * v = new VacuumMerlinEngine();
    
    SpaceCraft * crewdragon = new CrewDragon(this->c, this->h);
    Payload * payload = new FalconHeavyPayload(crewdragon, v);
    //payload = vme & CrewDragon [cargo & humans]
    this->product = new FalconHeavy(payload);
}

/**
 * @brief adds the Propulsion system.
 * @author Derived 
 */
void FalconHeavyBuilder::addPropulsion() {
    //use decorator to decorate the payload here...
    Payload * payload = this->product->getPayload();
    
    //decorate payload
    Propulsion * propulsion = new FalconHeavyPropulsion(payload);
    this->product->setPropulsion(propulsion);
}

/**
 * @brief gets the newly constructed Rocket.
 * @author Derived 
 * @return FalconHeavy* 
 */
FalconHeavy * FalconHeavyBuilder::getRocket() {
    return this->product;
}