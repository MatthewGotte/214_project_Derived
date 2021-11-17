//
// Created by muzin on 2021/11/08.
//

#ifndef DERIVED_FHSTAGE2_H
#define DERIVED_FHSTAGE2_H
#include "RocketState.h"

class FHStage2: public RocketState {

    /**
     * @brief Handle to state change of the rocket - Falcon Heavy stage 2
     * 
     * @param r 
     */
    void handleChange(Rocket* r);

    /**
     * @brief Destroy the FHStage2 object
     * 
     */
    ~FHStage2();

};

#endif //DERIVED_FHSTAGE2_H
