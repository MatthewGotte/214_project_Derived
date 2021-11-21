#include "F9Stage1.h"
#include "F9Stage2.h"
#include "Rocket.h"
/**
 * @brief Construct a new F9Stage1::F9Stage1 object
 * @author Takudzwanashe Dylan Muguti
 */
F9Stage1::F9Stage1():RocketState(){

}
/**
 * @brief Destroy the F9Stage1::F9Stage1 object
 * @author Takudzwanashe Dylan Muguti
 */
F9Stage1::~F9Stage1(){

}
/**
 * @brief 
 * @author Takudzwanashe Dylan Muguti
 * @param r 
 */
void F9Stage1::handleChange(Rocket* r){
    //change the stage of the rocket
    r->setState(new F9Stage2());
    //clean up memory.
    delete this;
}