#include "SpaceCraft.h"

int SpaceCraft::counter;

SpaceCraft::SpaceCraft(CargoCollection * c) {
    id = counter++;
    this->c = c;
}

SpaceCraft::~SpaceCraft() {
    // delete this->c;
}

void SpaceCraft::setCargoCollection(CargoCollection * c) {
    this->c = c;
}

CargoCollection * SpaceCraft::getCargoCollection() {
    return this->c;
}
