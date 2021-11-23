#include "Falcon9.h"
#include "F9Stage1.h"
#include "Colours.h"
#include <iostream>

using namespace std;

Falcon9::Falcon9(Payload * payload) : Rocket(payload) {
    this->stage = new F9Stage1();
}

Falcon9::~Falcon9() {
    delete stage;
    stage = nullptr;
}

void Falcon9::nextstage() {
    if (this->stage != nullptr) {
        this->stage->handleChange(this);
        Rocket::nextstage();
    } else {
        cout << Colours::yellow("ROCKET HAS ALREADY LANDED!") << endl;
    }
}

string Falcon9::getName(){
    return "Falcon 9";
}