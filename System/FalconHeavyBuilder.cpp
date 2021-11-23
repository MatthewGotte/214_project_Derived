#include "FalconHeavyBuilder.h"

FalconHeavyBuilder::FalconHeavyBuilder(CargoCollection * c, HumanCollection * h) {
    this->product = nullptr;
    this->c = c;
    this->h = h;
}

FalconHeavyBuilder::~FalconHeavyBuilder() {

}

void FalconHeavyBuilder::reset() {
    this->product = nullptr;
}

void FalconHeavyBuilder::addPayload() {
    VacuumMerlinEngine * v = new VacuumMerlinEngine();
    
    SpaceCraft * crewdragon = new CrewDragon(this->c, this->h);
    Payload * payload = new FalconHeavyPayload(crewdragon, v);
    //payload = vme & CrewDragon [cargo & humans]
    this->product = new FalconHeavy(payload);
}

void FalconHeavyBuilder::addPropulsion() {
    //use decorator to decorate the payload here...
    Payload * payload = this->product->getPayload();
    
    //decorate payload
    Propulsion * propulsion = new FalconHeavyPropulsion(payload);
    this->product->setPropulsion(propulsion);
}

FalconHeavy * FalconHeavyBuilder::getRocket() {
    return this->product;
}