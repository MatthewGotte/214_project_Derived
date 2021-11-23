#include "F9Stage1.h"
#include "F9Stage2.h"
#include "Rocket.h"

F9Stage1::F9Stage1():RocketState() {

}

F9Stage1::~F9Stage1() {

}

void F9Stage1::handleChange(Rocket* r) {
    //change the stage of the rocket
    r->setState(new F9Stage2());
    //clean up memory.
    delete this;
}