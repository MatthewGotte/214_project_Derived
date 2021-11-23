#include "Falcon9Builder.h"
#include "Dragon.h"
#include "Falcon9.h"

Falcon9Builder::Falcon9Builder(CargoCollection * c) {
    this->product = nullptr;
    this->c = c;
}

Falcon9Builder::~Falcon9Builder() {
}

void Falcon9Builder::reset() {
    this->product = nullptr;
}

void Falcon9Builder::addPayload() {
    // VacuumMerlinEngine * v = new VacuumMerlinEngine();
    // this->product->setPayload(new Falcon9Payload(this., v));
    VacuumMerlinEngine * v = new VacuumMerlinEngine();

    SpaceCraft * dragon = new Dragon(this->c);
    Payload * playload = new Falcon9Payload(dragon,v);
    
    this->product = new Falcon9(playload);
}

void Falcon9Builder::addPropulsion() {
    //user decorator to decorate the payload here...
    Payload * payload = this->product->getPayload();

    //decorate payload
    Propulsion * propulsion = new Falcon9Propulsion(payload);
    this->product->setPropulsion(propulsion);
}

Rocket * Falcon9Builder::getRocket() {
    return this->product;
}