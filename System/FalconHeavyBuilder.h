#ifndef DERIVED_FALCONHEAVYBUILDER_H
#define DERIVED_FALCONHEAVYBUILDER_H

#include <iostream>
#include <vector>
#include "Human.h"
#include "Cargo.h"
#include "HumanCollection.h"
#include "CargoCollection.h"
#include "RocketBuilder.h"
#include "Payload.h"
#include "FalconHeavy.h"
#include "FalconHeavyPayload.h"
#include "Propulsion.h"
#include "FalconHeavyPropulsion.h"


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
