#include "FalconHeavyBuilder.h"

FalconHeavyBuilder::FalconHeavyBuilder(vector< Cargo* > c, vector< Human* > h) {
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
    this->product->setPayload(new FalconHeavyPayload(v));
}

void FalconHeavyBuilder::addPropulsion() {
    //user decorator to decorate the payload here...
    
}

Rocket * FalconHeavyBuilder::getRocket() {
    return this->product;
}