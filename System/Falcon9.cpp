
#include "Falcon9.h"
#include "F9Stage1.h"
#include <iostream>
#include "Colours.h"
using namespace std;
/**
 * @brief Construct a new Falcon 9:: Falcon 9 object
 * @author Dervied 
 * @param payload 
 */
Falcon9::Falcon9(Payload * payload) : Rocket(payload) {
    this->stage = new F9Stage1();
}
/**
 * @brief Destroy the Falcon 9:: Falcon 9 object
 * @author Derived 
 */
Falcon9::~Falcon9() {

}
/**
 * @brief move to the next stage of the rocket calling the handle change 
 * @author Derived 
 */
void Falcon9::nextstage(){
    if(this->stage != nullptr)
        this->stage->handleChange(this);
    else
        cout<<Colours::yellow("ROCKET HAS ALREADY LANDED!")<<endl;
}