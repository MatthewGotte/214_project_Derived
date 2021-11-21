#include "Human.h"
#include <stdexcept>
/**
 * @brief Construct a new Human:: Human object
 * @author Derived
 * @param name 
 * @param weight 
 * @param role 
 */
Human::Human(string name, double weight, string role) {

    if (weight <= 0){

        throw std::invalid_argument("weight must be greater than zero");
        return;
    }

    this->weight = weight;
    this->name = name;
    this->role = role;
}
/**
 * @brief returns the name of the Human object.
 * @author Derived 
 * @return string 
 */
string Human::getName(){
    return name;
}
/**
 * @brief returns the Weight of the HUman object.
 * @author Derived 
 * @return double 
 */
double Human::getWeight(){
    return weight;
}
/**
 * @brief Destroy the Human:: Human object
 * @author Derived
 */
Human::~Human(){
    
}
/**
 * @brief returns the role of the Human object.
 * @author Derived 
 * @return string 
 */
string Human::getRole() {
    return role;
}