//
// Created by matth on 2021/11/18.
//

#include "Payload.h"
#include "Colours.h"
/**
 * @brief Construct a new Payload:: Payload object
 * @author Derived  
 * @param s 
 * @param v 
 */
Payload::Payload(SpaceCraft *s, VacuumMerlinEngine * v) {
        this->vacmerlinengine = v;
        this->spacecraft = s;
}
/**
 * @brief Destroy the Payload:: Payload object
 * @author Derived  
 */
Payload::~Payload(){
    delete this->vacmerlinengine;
    // delete this->spacecraft;
}
/**
 * @brief Returns the VacuumMerlineEngine object
 * @author Derived  
 * @return VacuumMerlinEngine* 
 */
VacuumMerlinEngine * Payload::getVacuumMerlinEngine() {
    return this->vacmerlinengine;
}
/**
 * @brief sets the VacuumaMerlineEngine object.
 * @author Derived  
 * @param v 
 */
void Payload::setVacuumMerlinEngine(VacuumMerlinEngine * v) {
    this->vacmerlinengine = v;
}
/**
 * @brief Returns the SpaceCraft object.
 * @author Derived 
 * @return SpaceCraft* 
 */
SpaceCraft * Payload::getSpaceCraft() {
    return this->spacecraft;
}
/**
 * @brief setSpaceCraft.
 * @author Derived  
 * @param s 
 */
void Payload::setSpaceCraft(SpaceCraft * s) {
    this->spacecraft = s;
}
/**
 * @brief prints the contents of the Spacecraft object.
 * @author Derived
 */
void Payload::print(){
    this->spacecraft->printSpaceCraft();
}

Payload::Payload(){

}

bool Payload::testVacuumMerlinEngine() {
    srand((unsigned) time(0));
    int r = rand() % 100;
    //test if in range of 94% success of a rocket launch:
    if ((0<=r) && (r<=3)) {
        return false; //failed
    }
    return true; //success
}
