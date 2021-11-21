#include "F9Stage2.h"
#include <iostream>

using namespace std;
/**
 * @brief Construct a new F9Stage2::F9Stage2 object
 * @author Takudzwanashe Dylan Muguti
 */
F9Stage2::F9Stage2():RocketState(){

}
/**
 * @brief Destroy the F9Stage2::F9Stage2 object
 * @author Takudzwanashe Dylan Muguti
 */
F9Stage2::~F9Stage2(){

}
/**
 * @brief 
 * @author Takudzwanashe Dylan Muguti
 * @param r 
 */
void F9Stage2::handleChange(Rocket* r){
    cout<<"the rocket has landed"<<endl;
}