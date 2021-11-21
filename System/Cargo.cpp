#include "Cargo.h"
/**
 * @brief Construct a new Cargo:: Cargo object
 * @author Muziwandile Ndlovu
 * @param name 
 * @param weight 
 * @param descp 
 */
Cargo::Cargo(string name , double weight , string descp){
    this->name = name;
    this->weight = weight;
    this->description = descp;
}
/**
 * @brief Get the Name of the Cargo object
 * @author Derived
 * @return string 
 */
string Cargo::getName(){
    return this->name;

}
/**
 * @brief Get the Description object
 * @author Derived
 * @return string 
 */
string Cargo::getDesription(){
    return this->description;
}
/**
 * @brief Get the Weight object
 * @author Derived
 * @return double 
 */
double Cargo:: getWeight(){
    return this->weight;
}
Cargo::~Cargo(){}