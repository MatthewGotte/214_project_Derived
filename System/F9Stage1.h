//
// Created by muzin on 2021/11/08.
//

#ifndef DERIVED_F9STAGE1_H
#define DERIVED_F9STAGE1_H
#include "RocketState.h"

class F9Stage1: public RocketState {

    /**
     * @brief Handle state change of the Falcon 9 - State change 1
     * 
     * @param r 
     */
    void handleChange(Rocket* r);

    /**
     * @brief Destroy the F9Stage1 object
     * 
     */
    ~F9Stage1();
};


#endif //DERIVED_F9STAGE1_H
