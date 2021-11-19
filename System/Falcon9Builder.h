//
// Created by muzin on 2021/11/09.
//

#ifndef DERIVED_FALCON9BUILDER_H
#define DERIVED_FALCON9BUILDER_H

#include "RocketBuilder.h"
#include "Cargo.h"
#include <vector>
#include <iostream>
#include "Falcon9Payload.h"

class Falcon9Builder : public RocketBuilder {
private:
    Rocket * product;
    vector< Cargo* > c;
public:
    Falcon9Builder(vector< Cargo* > c);
    ~Falcon9Builder();

    void reset();
    void addPayload();
    void addPropulsion();
    Rocket * getRocket();
};


#endif //DERIVED_FALCON9BUILDER_H
