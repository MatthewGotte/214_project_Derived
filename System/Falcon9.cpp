
#include "Falcon9.h"
#include "F9Stage1.h"
Falcon9::Falcon9(Payload * payload) : Rocket(payload) {
    this->stage = new F9Stage1();
}

Falcon9::~Falcon9() {

}

void Falcon9::nextstage(){
    this->stage->handleChange(this);
}