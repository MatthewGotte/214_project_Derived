//
// Created by muzin on 2021/11/08.
//

#ifndef DERIVED_FHSTAGE1_H
#define DERIVED_FHSTAGE1_H
#include "RocketState.h"

class FHStage1: public RocketState {
    void handleChange(Rocket* r);
    ~FHStage1();
};


#endif //DERIVED_FHSTAGE1_H
