#include "Colours.h"
#include "Rocket.h"
/**
 * @brief Construct a new Rocket:: Rocket object
 * @author Derived 
 * @param payload 
 */
Rocket::Rocket(Payload * payload) {
    this->payload = payload;
}
/**
 * @brief Destroy the Rocket:: Rocket object
 * @author Derived  
 */
Rocket::~Rocket(){
    delete stage;
    delete payload;
}
/**
 * @brief Sets the Payload object.
 * @author Derived 
 * @param p 
 */
void Rocket::setPayload(Payload * p) {
    this->payload = p;
}   
/**
 * @brief Returns the Payload object.
 * @author Derived  
 * @return Payload* 
 */
Payload * Rocket::getPayload() {
    return this->payload;
}
/**
 * @brief prints the contents of the Payload object.
 * @author Derived  
 */
void Rocket::print(){
    
    cout<<Colours::red("rocket is trying to print")<<endl;
    this->payload->print();
}
/**
 * @brief sets the stage of the Rocket.
 * @author Derived 
 * @param state 
 */
void Rocket::setState(RocketState *state){
    stage = state;
}

