#include "Falcon9Builder.h"

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
}

void Falcon9Builder::addPropulsion() {
    //user decorator to decorate the payload here...
}

Rocket * Falcon9Builder::getRocket() {
    return this->product;
}