//
// Created by muzin on 2021/11/08.
//

#ifndef DERIVED_F9STAGE2_H
#define DERIVED_F9STAGE2_H
#include "RocketState.h"

class F9Stage2: public RocketState {
    void handlechange(Rocket* r);
    ~F9Stage2();
};


#endif //DERIVED_F9STAGE2_H
