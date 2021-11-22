#include "Colours.h"
#include "FalconHeavyPropulsion.h"
/**
 * @brief Construct a new Falcon Heavy Propulsion:: Falcon Heavy Propulsion object
 * @author Derived 
 */
FalconHeavyPropulsion::FalconHeavyPropulsion(Payload * p) {
    this->core1 = new Falcon9Core("Core-1");
    this->core2 = new Falcon9Core("Core-2");
    this->core3 = new Falcon9Core("Core-3");

    payload = p;
}
/**
 * @brief Destroy the Falcon Heavy Propulsion:: Falcon Heavy Propulsion object
 * @author Derived 
 */
FalconHeavyPropulsion::~FalconHeavyPropulsion() {
    land();
    delete this->core1;
    delete this->core2;
    delete this->core3;
}

void FalconHeavyPropulsion::land() {
    //landing core1
    srand((unsigned) time(0));
    int result = 1 + (rand() % 30);
    
    if (result == 1) {
        cout << Colours::red(core1->getName() + " HAS FAILED TO LAND SUCCESSFULLY") << endl;
    } else{
        cout << Colours::green(core1->getName() + " HAS SUCCESSFULLY LANDED BACK ON EARTH") << endl;
    }

    //landing core2
    srand((unsigned) time(0));
    result = 1 + (rand() % 30);
    
    if (result == 1) {
        cout << Colours::red(core2->getName() + " HAS FAILED TO LAND SUCCESSFULLY") << endl;
    } else{
        cout << Colours::green(core2->getName() + " HAS SUCCESSFULLY LANDED BACK ON EARTH") << endl;
    }
    //landing core3

    srand((unsigned) time(0));
    result = 1 + (rand() % 30);

    if (result == 1) {
        cout << Colours::red(core3->getName() + " HAS FAILED TO LAND SUCCESSFULLY") << endl;
    } else {
        cout << Colours::green(core3->getName() + " HAS SUCCESSFULLY LANDED BACK ON EARTH") << endl;
    }
}
FalconHeavyPropulsionMemento* FalconHeavyPropulsion::backup() {
    return new FalconHeavyPropulsionMemento(this->core1 ,this->core2 ,this->core3 , this->payload);
}
void FalconHeavyPropulsion::restore(FalconHeavyPropulsionMemento * corerestore) {
    this->core1 = corerestore->getCore1();
    this->core2 = corerestore->getCore2();
    this->core3 = corerestore->getCore3();
    this->payload = corerestore->getPay();
}

void FalconHeavyPropulsion::launch() {
    this->payload->launch();
    //extend functionality here...
    cout << Colours::green(core1->getName() + " is firing") << endl;
    cout << Colours::green(core2->getName() + " is firing") << endl;
    cout << Colours::green(core3->getName() + " is firing") << endl;
}