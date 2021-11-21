#include "Colours.h"
#include "FalconHeavyPropulsion.h"
/**
 * @brief Construct a new Falcon Heavy Propulsion:: Falcon Heavy Propulsion object
 * @author Derived 
 */
FalconHeavyPropulsion::FalconHeavyPropulsion() {
    this->core1 = new Falcon9Core("Core-1");
    this->core2 = new Falcon9Core("Core-2");
    this->core3 = new Falcon9Core("Core-3");
}
/**
 * @brief Destroy the Falcon Heavy Propulsion:: Falcon Heavy Propulsion object
 * @author Derived 
 */
FalconHeavyPropulsion::~FalconHeavyPropulsion() {
    delete this->core1;
    delete this->core2;
    delete this->core3;
}