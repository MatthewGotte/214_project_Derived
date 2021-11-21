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
/**
 * @brief Destroy the Space Craft:: Space Craft object
 * @author Derived 
 * 
 */
SpaceCraft::~SpaceCraft() {

}
/**
 * @brief Sets the CargoCollection object. 
 * @author Derived  
 * @param c 
 */
void SpaceCraft::setCargoCollection(CargoCollection * c) {
    this->c = c;
}
/**
 * @brief Returns the Cargo object.
 * @author Derived 
 * @return CargoCollection* 
 */
CargoCollection * SpaceCraft::getCargoCollection() {
    return this->c;
}
