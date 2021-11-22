#include "Propulsion.h"
#include "Colours.h"
Propulsion::Propulsion() {

}

Propulsion::~Propulsion() {

}

bool Propulsion::testPropulsion() {
    srand((unsigned) time(0));
    int r = rand() % 100;
    //test if in range of 94% success of a rocket launch:
    if ((0<=r) && (r<=3)) {
        return false; //failed
    }
    return true; //success
}