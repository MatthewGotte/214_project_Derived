//
// Created by matth on 2021/11/18.
//

#ifndef DERIVED_PROPULSION_H
#define DERIVED_PROPULSION_H

#include "Payload.h"

class Propulsion : public Payload {
private:

public:
    Propulsion();
    virtual ~Propulsion();
    virtual void land()=0;
    bool testPropulsion();
};


#endif //DERIVED_PROPULSION_H
