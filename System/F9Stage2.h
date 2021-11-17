//
// Created by muzin on 2021/11/08.
//

#ifndef DERIVED_F9STAGE2_H
#define DERIVED_F9STAGE2_H
#include "RocketState.h"

class F9Stage2: public RocketState {

    /**
     * @brief Handle change of state of the Falcon 9 - State change 2
     * 
     * @param r 
     */
    void handlechange(Rocket* r);

    /**
     * @brief Destroy the F9Stage2 object
     * 
     */
    ~F9Stage2();
};


#endif //DERIVED_F9STAGE2_H
