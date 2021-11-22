#include "Falcon9Propulsion.h"
#include "Colours.h"
/**
 * @brief Construct a new Falcon 9 Propulsion:: Falcon 9 Propulsion object
 * @author Derived  
 */
Falcon9Propulsion::Falcon9Propulsion(Payload * p) {
    this->core1 = new Falcon9Core("Core-1");

    payload = p;
}
/**
 * @brief Destroy the Falcon 9 Propulsion:: Falcon 9 Propulsion object
 * @author Derived 
 */
Falcon9Propulsion::~Falcon9Propulsion() {
    land();
    delete this->core1;
}
/**
 * @brief 
 * 
 */
void Falcon9Propulsion::land() {
    srand((unsigned) time(0));
    int result = 1 + (rand() % 30);
    
    if(result == 1) {
        cout << Colours::red(core1->getName() + " HAS FAILED TO LAND SUCCESSFULLY") << endl;
    } else{
        cout << Colours::green(core1->getName() + " HAS SUCCESSFULLY LANDED BACK ON EARTH") << endl;
    }
}
PropulsionMemento* Falcon9Propulsion::backup() {
    return new PropulsionMemento(this->core1 , this->payload);
}
void Falcon9Propulsion::restore(PropulsionMemento * corerestore){
    this->core1 = corerestore->getCore();
    this->payload = corerestore->getPay();
}

void Falcon9Propulsion::launch() {
    this->payload->launch();
    //extend functionality here...

    cout << Colours::green(core1->getName() + "is firing") << endl;
}