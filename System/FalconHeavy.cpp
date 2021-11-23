#include "FalconHeavy.h"
#include "FHStage1.h"
#include "Colours.h"

FalconHeavy::FalconHeavy(Payload * Payload) : Rocket(Payload) {
    this->stage = new FHStage1();
}

FalconHeavy::~FalconHeavy() {
    
}

void FalconHeavy::nextstage() {
    if (this->stage != nullptr) {
        this->stage->handleChange(this);
        Rocket::nextstage();
    } else {
        cout << Colours::yellow("ROCKET HAS ALREADY LANDED!") << endl;
    }
}