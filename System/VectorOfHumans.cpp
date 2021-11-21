#include "VectorOfHumans.h"

/**
 * @brief Adds Human object to the vector of people.
 * @author Derived  
 * @param human 
 */
void VectorOfHumans::addHuman(Human * human) {
    this->people.push_back(human);
}
/**
 * @brief Checks if the vector of people is empty.
 * @author Derived
 * @return true 
 * @return false 
 */
bool VectorOfHumans::isEmpty() {
    if(this->people.empty())
    {
        return true;
    }
    return false;
}
/**
 * @brief Responbile for the creation of the OperationsIteratorHumans Object.
 * @author Derived 
 * @return HumanIterator* 
 */
HumanIterator *VectorOfHumans::createHumanIterator() {
    return new OperationsIteratorHumans(this->people);
}
/**
 * @brief Removes the Human object for the people vector.
 * @author Derived 
 * @param human 
 */
void VectorOfHumans::removeHuman(Human *human) {
    if(this->isEmpty()) {

        return;

    } else {
        vector<Human *>:: iterator it;
        for (it= people.begin() ; it != people.end() ; ++it) {
            if (human == *it ) {
                people.erase(it);
            }
        }
    }

}
/**
 * @brief Construct a new Vector Of Humans:: Vector Of Humans object
 * @author Derived 
 */
VectorOfHumans::VectorOfHumans() = default;
/**
 * @brief Destroy the Vector Of Humans:: Vector Of Humans object
 * @author Derived 
 * 
 */
VectorOfHumans::~VectorOfHumans() noexcept = default;