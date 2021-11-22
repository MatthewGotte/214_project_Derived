//
// Created by muzin on 2021/11/09.
//

#ifndef DERIVED_FALCON9BUILDER_H
#define DERIVED_FALCON9BUILDER_H

#include <iostream>
#include <vector>
#include "RocketBuilder.h"
#include "Cargo.h"
#include "CargoCollection.h"
#include "Falcon9Payload.h"
#include "Falcon9Propulsion.h"
class Falcon9Builder : public RocketBuilder {
private:
    Rocket * product;
    CargoCollection * c;
public:
    Falcon9Builder(CargoCollection * c);
    ~Falcon9Builder();

    void reset();
    void addPayload();
    void addPropulsion();
    Rocket * getRocket();
};


#endif //DERIVED_FALCON9BUILDER_H
