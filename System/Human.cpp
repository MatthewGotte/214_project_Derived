#include "Human.h"
/**
 * @brief Construct a new Human:: Human object
 * @author Derived
 * @param name 
 * @param weight 
 * @param role 
 */
Human::Human(string name, double weight, string role) {
    this->name = name;
    this->weight = weight;
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