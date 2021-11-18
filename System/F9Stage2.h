#ifndef DERIVED_F9STAGE2_H
#define DERIVED_F9STAGE2_H
#include "RocketState.h"

class F9Stage2: public RocketState {
    void handleChange(Rocket* r);
    F9Stage2();
    ~F9Stage2();
};


#endif //DERIVED_F9STAGE2_H
