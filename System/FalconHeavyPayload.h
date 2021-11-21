//
// Created by matth on 2021/11/19.
//

#ifndef DERIVED_FALCONHEAVYPAYLOAD_H
#define DERIVED_FALCONHEAVYPAYLOAD_H

#include "Payload.h"
#include "CrewDragon.h"
#include "SpaceCraft.h"
#include "Falcon9Core.h"

class FalconHeavyPayload : public Payload {
private:
    Falcon9Core * core1;
    Falcon9Core * core2;
    Falcon9Core * core3;
public:
    FalconHeavyPayload(VacuumMerlinEngine * v);
    ~FalconHeavyPayload();
};


#endif //DERIVED_FALCONHEAVYPAYLOAD_H   
