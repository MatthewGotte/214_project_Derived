#ifndef DERIVED_F9STAGE1_H
#define DERIVED_F9STAGE1_H
#include "RocketState.h"

class Rocket;
class F9Stage1: public RocketState {
    public:
        void handleChange(Rocket* r);
        F9Stage1();
        ~F9Stage1();
};


#endif //DERIVED_F9STAGE1_H
