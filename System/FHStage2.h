//
// Created by muzin on 2021/11/08.
//

#ifndef DERIVED_FHSTAGE2_H
#define DERIVED_FHSTAGE2_H
#include "RocketState.h"

class FHStage2: public RocketState {
    void handleChange(Rocket* r);
    ~FHStage2();
};


#endif //DERIVED_FHSTAGE2_H