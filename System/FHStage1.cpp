#include "Rocket.h"
#include "FHStage1.h"
#include "FHstage2.h"
#include "Colours.h"

using namespace std;
FHStage1::FHStage1():RocketState(){
    
}

FHStage1::~FHStage1(){

}

void FHStage1::handleChange(Rocket* r){
    //change the stage of the rocket
 
    r->setState(new FHStage2());

    //clean up memory.
    delete this;
}
