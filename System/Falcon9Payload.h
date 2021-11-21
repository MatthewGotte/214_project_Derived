//
// Created by matth on 2021/11/19.
//

#ifndef DERIVED_FALCON9PAYLOAD_H
#define DERIVED_FALCON9PAYLOAD_H

#include "Payload.h"
#include "Falcon9Core.h"
#include "MerlinEngine.h"
#include "Dragon.h"
#include "Cargo.h"
#include <vector>
#include <iostream>

using namespace std;

class Falcon9Payload : public Payload {
public:
    Falcon9Payload(SpaceCraft * s, VacuumMerlinEngine * vme);
    ~Falcon9Payload();
};


#endif //DERIVED_FALCON9PAYLOAD_H
