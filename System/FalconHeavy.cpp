#include "FalconHeavy.h"
#include "FHStage1.h"
#include "Colours.h"
/**
 * @brief Construct a new Falcon Heavy:: Falcon Heavy object
 * @author Derived 
 * @param Payload 
 */
FalconHeavy::FalconHeavy(Payload * Payload) : Rocket(Payload) {
    this->stage = new FHStage1();
}
/**
 * @brief Destroy the Falcon Heavy:: Falcon Heavy object
 * @author Derived 
 */
FalconHeavy::~FalconHeavy() {
    
}
/**
 * @brief Move on to the next stage by calling the handle change method 
 * @author Derived  
 */
void FalconHeavy::nextstage(){
    if (this->stage != nullptr)
        this->stage->handleChange(this);
    else
        cout << Colours::yellow("ROCKET HAS ALREADY LANDED!") << endl;
}