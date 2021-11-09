//
// Created by muzin on 2021/11/09.
//

#ifndef DERIVED_FALCONHEAVYBUILDER_H
#define DERIVED_FALCONHEAVYBUILDER_H

#include "RocketBuilder.h"
#include "Cargo.h"
#include "Human.h"
#include <vector>
#include <iostream>

class FalconHeavyBuilder : public RocketBuilder {
private:
    vector< Cargo* > cargo;
    vector< Human* > human;
public:
    FalconHeavyBuilder(vector< Cargo* > c, vector< Human* > h) : RocketBuilder() {
        this->cargo = c;
        this->human = h;
    };
    ~FalconHeavyBuilder();
};


#endif //DERIVED_FALCONHEAVYBUILDER_H
