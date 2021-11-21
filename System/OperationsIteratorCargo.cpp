#include "OperationsIteratorCargo.h"

#include <utility>
/**
 * @brief Returns the next Cargo object.
 * @author Derived 
 * @return Cargo* 
 */
Cargo *OperationsIteratorCargo::next() {
    if(this->hasNext()){
        ++this->currentpos;
        return this->itlist.at(currentpos);
    }
    else{
        return nullptr;
    }

}
/**
 * @brief Returns the current Cargo object.
 * @author Derived 
 * @return Cargo* 
 */
Cargo *OperationsIteratorCargo::current() {
    return this->itlist.at(currentpos);

}
/**
 * @brief Checks if the currnet Cargo object is the last in the list.
 * 
 * @return true 
 * @return false 
 */
bool OperationsIteratorCargo::hasNext() {
    if(currentpos<itlist.size()-1)
    {
        return true;
    }
    return false;

}
/**
 * @brief Returns the first Cargo ojbect in the list.
 * @author Derived 
 * @return Cargo* 
 */
Cargo *OperationsIteratorCargo::first() {
    return this->itlist.at(0);

}
/**
 * @brief Construct a new Operations Iterator Cargo:: Operations Iterator Cargo object
 * @author Derived 
 * @param vect 
 */
OperationsIteratorCargo::OperationsIteratorCargo(vector<Cargo *> vect) {
    this->itlist=std::move(vect);

}
