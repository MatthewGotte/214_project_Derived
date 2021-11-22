#ifndef DERIVED_FHSTAGE2_H
#define DERIVED_FHSTAGE2_H

#include "RocketState.h"

class Rocket;

class FHStage2: public RocketState {
    public:
        void handleChange(Rocket* r);
        FHStage2();
        ~FHStage2();
};


#endif //DERIVED_FHSTAGE2_H
