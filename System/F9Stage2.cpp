#include "F9Stage2.h"
#include "Rocket.h"
#include <iostream>

using namespace std;
/**
 * @brief Construct a new F9Stage2::F9Stage2 object
 * @author Derived 
 */
F9Stage2::F9Stage2():RocketState(){

}
/**
 * @brief Destroy the F9Stage2::F9Stage2 object
 * @author Derived 
 */
F9Stage2::~F9Stage2(){

}
/**
 * @brief Handles the change for on stage to another 
 * @author Derived 
 * @param r 
 */
void F9Stage2::handleChange(Rocket* r){
    cout<<"the rocket has landed"<<endl;
    r->setState(nullptr);

    delete this;
}