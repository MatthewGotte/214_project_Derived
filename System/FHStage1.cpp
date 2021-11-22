#include "FHStage1.h"
#include "FHstage2.h"
#include "Rocket.h"
/**
 * @brief Construct a new FHStage1::FHStage1 object
 * @author Derived
 * 
 */
FHStage1::FHStage1():RocketState(){
    
}
/**
 * @brief Destroy the FHStage1::FHStage1 object
 * @author Derived
 */
FHStage1::~FHStage1(){

}
/**
 * @brief 
 * @author Derived
 * @param r 
 */
void FHStage1::handleChange(Rocket* r){
 //change the stage of the rocket
    r->setState(new FHStage2());
    //clean up memory.
    delete this;
}
