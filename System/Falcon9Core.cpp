#include "Falcon9Core.h"

Falcon9Core::Falcon9Core(string name) {
    this->name = name;
    //initialize all engines for this core;
    for (int i = 1; i <= 7; i++) {
        this->coreEngines.push_back(new MerlinEngine(this->name + " - Engine: " + to_string(i)));
    }
}

Falcon9Core::~Falcon9Core() {
    for (int i = 0; i < 7; i++) {
        delete this->coreEngines.at(i);
    }
}