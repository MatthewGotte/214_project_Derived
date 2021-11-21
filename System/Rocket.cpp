#include "Colours.h"
#include "Rocket.h"

Rocket::Rocket(Payload * payload) {
    this->payload = payload;
}

Rocket::~Rocket(){
    delete stage;
    delete payload;
}

void Rocket::setPayload(Payload * p) {
    this->payload = p;
}   

Payload * Rocket::getPayload() {
    return this->payload;
}

void Rocket::print(){
    
    cout<<Colours::red("rocket is trying to print")<<endl;
    this->payload->print();
}

void Rocket::setState(RocketState *state){
    stage = state;
}

