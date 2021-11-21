#include "FalconHeavy.h"
#include "FHStage1.h"
FalconHeavy::FalconHeavy(Payload * Payload) : Rocket(Payload) {
    this->stage = new FHStage1();
}

FalconHeavy::~FalconHeavy() {
    
}

void FalconHeavy::nextstage(){
    this->stage->handleChange(this);
}