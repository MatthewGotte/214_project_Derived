//
// Created by muzin on 2021/11/01.
//

#include "OperationsIteratorHumans.h"
/**
 * @brief Returns the next Human object.
 * @author Derived  
 * @return Human* 
 */
Human *OperationsIteratorHumans::next() {
    if(this->hasNext()){
        ++this->currentpos;
        return this->itlist.at(currentpos);
    }
    else{
        return nullptr;
    }

}
/**
 * @brief Returns the current Human object.
 * @author Derived  
 * @return Human* 
 */
Human *OperationsIteratorHumans::current() {
    return this->itlist.at(currentpos);

}
/**
 * @brief Checks if the current Human object is the last in the list.
 * @author Derived  
 * @return true 
 * @return false 
 */
bool OperationsIteratorHumans::hasNext() {
    if(currentpos<itlist.size()-1)
    {
        return true;
    }
    return false;

}
/**
 * @brief Returns the first Human object in the list.
 * @author Derived  
 * @return Human* 
 */
Human *OperationsIteratorHumans::first() {
    return this->itlist.at(0);

}
/**
 * @brief Construct a new Operations Iterator Humans:: Operations Iterator Humans object
 * @author Derived  
 * @param vect 
 */
OperationsIteratorHumans::OperationsIteratorHumans(vector<Human *> vect) {
    this->itlist=vect;

}
