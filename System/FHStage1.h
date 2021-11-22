#ifndef DERIVED_FHSTAGE1_H
#define DERIVED_FHSTAGE1_H

#include "RocketState.h"

class Rocket;

class FHStage1: public RocketState {
    public:
        void handleChange(Rocket* r);
        FHStage1();
        ~FHStage1();
};


#endif //DERIVED_FHSTAGE1_H
