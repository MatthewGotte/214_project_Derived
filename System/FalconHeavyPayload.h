//
// Created by matth on 2021/11/19.
//

#ifndef DERIVED_FALCONHEAVYPAYLOAD_H
#define DERIVED_FALCONHEAVYPAYLOAD_H

#include "Payload.h"
#include "CrewDragon.h"
#include "SpaceCraft.h"
#include "VacuumMerlinEngine.h"
#include "Falcon9Core.h"

class FalconHeavyPayload : public Payload {
public:
    FalconHeavyPayload(SpaceCraft * s, VacuumMerlinEngine * vme);
    ~FalconHeavyPayload();
    void launch();
};


#endif //DERIVED_FALCONHEAVYPAYLOAD_H   
