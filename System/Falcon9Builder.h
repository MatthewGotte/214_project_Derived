//
// Created by muzin on 2021/11/09.
//

#ifndef DERIVED_FALCON9BUILDER_H
#define DERIVED_FALCON9BUILDER_H

#include "RocketBuilder.h"
#include "Cargo.h"
#include <vector>
#include <iostream>

class Falcon9Builder : public RocketBuilder {
private:
    vector< Cargo* > cargo;
public:
    Falcon9Builder(vector< Cargo* > c) : RocketBuilder() {
        this->cargo = c;
    };
    ~Falcon9Builder();
};


#endif //DERIVED_FALCON9BUILDER_H
