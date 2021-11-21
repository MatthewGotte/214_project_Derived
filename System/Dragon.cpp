#include "Dragon.h"
/**
 * @brief Construct a new Dragon:: Dragon object
 * @author Derived 
 * @param c 
 */
Dragon::Dragon(CargoCollection * c) : SpaceCraft(c) {
    this->c = c;
}
/**
 * @brief Destroy the Dragon:: Dragon object
 * @author Derived 
 */
Dragon::~Dragon() {

}
