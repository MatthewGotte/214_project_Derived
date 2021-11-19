
#include "Rocket.h"

Rocket::Rocket(Payload * payload) {
    this->payload = payload;
}

Rocket::~Rocket(){
    
}

void Rocket::setPayload(Payload * p) {
    this->payload = p;
}   

Payload * Rocket::getPayload() {
    return this->payload;
}