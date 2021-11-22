#include "PropulsionMemento.h"

/**
 * @brief Construct a new Propultion Memento:: Propultion Memento object
 * @author Derived
 * @param core 
 */
PropulsionMemento::PropulsionMemento(Falcon9Core * core , Payload * pay ){
    this->core = core;
    this->payload = pay;
}
/**
 * @brief Return the save Falcon 9 Core 
 * @author Derived
 * @return Falcon9Core* 
 */
Falcon9Core * PropulsionMemento::getCore(){
    return this->core;
}
Payload * PropulsionMemento::getPay(){
    return this->payload;
}

