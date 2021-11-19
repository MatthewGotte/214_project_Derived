//
// Created by matth on 2021/11/18.
//

#include "Falcon9Propulsion.h"

Falcon9Propulsion::Falcon9Propulsion() {
    this->core1 = new Falcon9Core("Core-1");
}

Falcon9Propulsion::~Falcon9Propulsion() {
    delete this->core1;
}