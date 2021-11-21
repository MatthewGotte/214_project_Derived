#include "FHStage2.h"
#include <iostream>
#include "Rocket.h"
using namespace std;
/**
 * @brief Construct a new FHStage2::FHStage2 object
 * @author Derived 
 */
FHStage2::FHStage2():RocketState(){

}
/**
 * @brief Destroy the FHStage2::FHStage2 object
 * @author Derived 
 */
FHStage2::~FHStage2(){

}
/**
 * @brief This fucntion is responsible for changing the stage of the rocket.
 * @author Derived 
 * @param r 
 */
void FHStage2::handleChange(Rocket* r){
    cout<<"Rocket has landed"<<endl;
    r->setState(nullptr);

    delete this;
}