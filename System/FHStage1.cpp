#include "FHStage1.h"
#include "FHstage2.h"
#include "Rocket.h"
/**
 * @brief Construct a new FHStage1::FHStage1 object
 * @author Takudzwanashe Dylan Muguti
 * 
 */
FHStage1::FHStage1():RocketState(){
    
}
/**
 * @brief Destroy the FHStage1::FHStage1 object
 * @author Takudzwanashe Dylan Muguti
 */
FHStage1::~FHStage1(){

}
/**
 * @brief 
 * @author Takudzwanashe Dylan Muguti
 * @param r 
 */
void FHStage1::handleChange(Rocket* r){
 //change the stage of the rocket
    r->setState(new FHStage2());
    //clean up memory.
    delete this;
}

//derived chat should be deleted as soon as possible.
//what's poping
//Why is it on the web not in vs code?
// you should be able to join via vscode 
//are you done eating?
