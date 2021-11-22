#include <iostream>
#include "Rocket.h"
#include "FHStage2.h"

using namespace std;

FHStage2::FHStage2():RocketState() {

}

FHStage2::~FHStage2() {

}

void FHStage2::handleChange(Rocket* r) {
    r->setState(nullptr);
    delete this;
}