#ifndef DERIVED_FALCONHEAVYBUILDER_H
#define DERIVED_FALCONHEAVYBUILDER_H

#include "RocketBuilder.h"
#include "Cargo.h"
#include "Human.h"
#include <vector>
#include <iostream>
#include "FalconHeavyPayload.h"

class FalconHeavyBuilder : public RocketBuilder {
private:
    Rocket * product;
    vector< Cargo* > c;
    vector< Human* > h;
public:
    FalconHeavyBuilder(vector< Cargo* > c, vector< Human* > h);
    ~FalconHeavyBuilder();

    void reset();
    void addPayload();
    void addPropulsion();
    Rocket * getRocket();
};


#endif //DERIVED_FALCONHEAVYBUILDER_H
