#include "F9Stage2.h"
#include "Rocket.h"
#include <iostream>

using namespace std;

F9Stage2::F9Stage2():RocketState() {

}

F9Stage2::~F9Stage2() {

}

void F9Stage2::handleChange(Rocket* r) {
    cout << "the rocket has landed" << endl;
    r->setState(nullptr);

    delete this;
}