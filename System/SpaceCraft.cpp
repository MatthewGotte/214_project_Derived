
#include "SpaceCraft.h"

int SpaceCraft::counter;
/**
 * @brief Construct a new Space Craft:: Space Craft object
 * 
 * @param human 
 * @param mission 
 */
SpaceCraft::SpaceCraft(CargoCollection * c) {
    id = counter++;
    this->c = c;
}

SpaceCraft::~SpaceCraft() {

}

void SpaceCraft::setCargoCollection(CargoCollection * c) {
    this->c = c;
}

CargoCollection * SpaceCraft::getCargoCollection() {
    return this->c;
}
