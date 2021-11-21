#ifndef DERIVED_FALCONHEAVYBUILDER_H
#define DERIVED_FALCONHEAVYBUILDER_H

#include "RocketBuilder.h"
#include "Cargo.h"
#include "Human.h"
#include <vector>
#include <iostream>
#include "FalconHeavyPayload.h"
#include "FalconHeavy.h"
#include "Payload.h"
#include "HumanCollection.h"
#include "CargoCollection.h"

class FalconHeavyBuilder : public RocketBuilder {
private:
    FalconHeavy * product;
    CargoCollection * c;
    HumanCollection * h;
public:
    FalconHeavyBuilder(CargoCollection * c, HumanCollection * h);
    ~FalconHeavyBuilder();

    void reset();
    void addPayload();
    void addPropulsion();
    FalconHeavy* getRocket();
};


#endif //DERIVED_FALCONHEAVYBUILDER_H
