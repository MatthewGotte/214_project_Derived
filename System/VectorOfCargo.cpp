#include "VectorOfCargo.h"
/**
 * @brief adds the Cargor 
 * @author Derived 
 * @param cargo 
 */
void VectorOfCargo::addCargo(Cargo * cargo) {
    this->cargo.push_back(cargo);
}
/**
 * @brief Checks if the vector of cargo is empty.
 * @author Derived 
 * @return true 
 * @return false 
 */
bool VectorOfCargo::isEmpty() {
    if (this->cargo.empty()) {

        return true;

    }

    return false;
}
/**
 * @brief Responsible for the creatation of the OperationsIteratorCargo object.
 * @author Derived 
 * @return CargoIterator* 
 */
CargoIterator *VectorOfCargo::createCargoIterator() {
    return new OperationsIteratorCargo(this->cargo);

}
/**
 * @brief Removes the Cargo object from the list.
 * @author Derived 
 * @param cargos 
 */
void VectorOfCargo::removeCargo(Cargo *cargos) {
    if(this->isEmpty()) {
        
        return;

    } else {
        vector<Cargo*>:: iterator it;
        for (it= cargo.begin() ; it != cargo.end() ; ++it) {
            if (cargos == *it ) {
                cargo.erase(it);
            }
        }
    }
}
/**
 * @brief Destroy the Vector Of Cargo:: Vector Of Cargo object
 * @author Derived  
 */
VectorOfCargo::~VectorOfCargo() noexcept = default;
/**
 * @brief Construct a new Vector Of Cargo:: Vector Of Cargo object
 * @author Derived  
 */
VectorOfCargo::VectorOfCargo() = default;