#include "VectorOfHumans.h"

void VectorOfHumans::addHuman(Human * human) {
    this->people.push_back(human);
}

bool VectorOfHumans::isEmpty() {
    if(this->people.empty()) {
        return true;
    }
    return false;
}

HumanIterator *VectorOfHumans::createHumanIterator() {
    return new OperationsIteratorHumans(this->people);
}

void VectorOfHumans::removeHuman(Human *human) {
    if(this->isEmpty()) {
        return;
    } else {
        vector<Human *>:: iterator it;
        for (it= people.begin() ; it != people.end() ; ++it) {
            if (human == *it ){
                people.erase(it);
            }
        }
    }
}

VectorOfHumans::VectorOfHumans() = default;

VectorOfHumans::~VectorOfHumans(){
    vector<Human *>:: iterator it;
    for (it= people.begin() ; it != people.end() ; ++it) {
            delete *it;
    }
}