#include "Human.h"
/**
 * @brief Construct a new Human:: Human object
 * @author Takudzwanashe Dylan Muguti
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
 * @brief 
 * 
 * @return string 
 */
string Human::getName(){
    return name;
}
/**
 * @brief 
 * 
 * @return double 
 */
double Human::getWeight(){
    return weight;
}