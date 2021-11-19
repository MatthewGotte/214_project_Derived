//
// Created by matth on 2021/11/18.
//

#ifndef DERIVED_FALCON9PROPULSION_H
#define DERIVED_FALCON9PROPULSION_H

#include "Propulsion.h"
#include "Falcon9Core.h"

class Falcon9Propulsion : public Propulsion {
private:
    Falcon9Core * core1;
public:
    Falcon9Propulsion();
    ~Falcon9Propulsion();
};

#endif //DERIVED_FALCON9PROPULSION_H