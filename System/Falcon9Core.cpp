#include "Falcon9Core.h"
#include "Colours.h"
/**
 * @brief Construct a new Falcon 9 Core:: Falcon 9 Core object
 * @author Derived 
 * @param name 
 */
Falcon9Core::Falcon9Core(string name) {
    this->name = name;
    //initialize all engines for this core;
    for (int i = 1; i <= 7; i++) {
        this->coreEngines.push_back(new MerlinEngine(this->name + " - Engine: " + to_string(i)));
    }
}
/**
 * @brief Destroy the Falcon 9 Core:: Falcon 9 Core object
 * @author Derived 
 */
Falcon9Core::~Falcon9Core() {
    cout << Colours::green(name + " has successfully landed back on earth") << endl;
    for (int i = 0; i < 7; i++) {
        delete this->coreEngines.at(i);
    }
}