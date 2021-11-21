//
// Created by matth on 2021/11/18.
//

#include "Falcon9Propulsion.h"
/**
 * @brief Construct a new Falcon 9 Propulsion:: Falcon 9 Propulsion object
 * @author Derived  
 */
Falcon9Propulsion::Falcon9Propulsion() {
    this->core1 = new Falcon9Core("Core-1");
}
/**
 * @brief Destroy the Falcon 9 Propulsion:: Falcon 9 Propulsion object
 * @author Derived 
 */
Falcon9Propulsion::~Falcon9Propulsion() {
    delete this->core1;
}