//
// Created by muzin on 2021/11/08.
//

#ifndef DERIVED_F9STAGE1_H
#define DERIVED_F9STAGE1_H
#include "RocketState.h"

class F9Stage1: public RocketState {
    void handleChange(Rocket* r);
    ~F9Stage1();
};


#endif //DERIVED_F9STAGE1_H
