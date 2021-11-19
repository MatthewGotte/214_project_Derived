//
// Created by matth on 2021/11/19.
//

#ifndef DERIVED_FALCONHEAVYPROPULSION_H
#define DERIVED_FALCONHEAVYPROPULSION_H

#include "Propulsion.h"
#include "Falcon9Core.h"

class FalconHeavyPropulsion : public Propulsion {
private:
    Falcon9Core * core1;
    Falcon9Core * core2;
    Falcon9Core * core3;
public:
    FalconHeavyPropulsion();
    ~FalconHeavyPropulsion();
};


#endif //DERIVED_FALCONHEAVYPROPULSION_H
