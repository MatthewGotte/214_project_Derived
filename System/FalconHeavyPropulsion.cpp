
//
// Created by matth on 2021/11/19.
//

#include "FalconHeavyPropulsion.h"

FalconHeavyPropulsion::FalconHeavyPropulsion() {
    this->core1 = new Falcon9Core("Core-1");
    this->core2 = new Falcon9Core("Core-2");
    this->core3 = new Falcon9Core("Core-3");
}

FalconHeavyPropulsion::~FalconHeavyPropulsion() {
    delete this->core1;
    delete this->core2;
    delete this->core3;
}