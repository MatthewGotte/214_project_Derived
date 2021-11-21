#include "FHStage2.h"
#include <iostream>

using namespace std;
/**
 * @brief Construct a new FHStage2::FHStage2 object
 * 
 */
FHStage2::FHStage2():RocketState(){

}
/**
 * @brief Destroy the FHStage2::FHStage2 object
 * 
 */
FHStage2::~FHStage2(){

}
/**
 * @brief 
 * 
 * @param r 
 */
void FHStage2::handleChange(Rocket* r){
    cout<<"Rocket has landed"<<endl;
}