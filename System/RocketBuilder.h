//
// Created by muzin on 2021/11/09.
//

#ifndef DERIVED_ROCKETBUILDER_H
#define DERIVED_ROCKETBUILDER_H

#include "Rocket.h"

class RocketBuilder {
public:
    RocketBuilder();
    virtual ~RocketBuilder();

    virtual void reset() = 0;
    virtual void addPayload() = 0;
    virtual void addPropulsion() = 0;
    virtual Rocket * getRocket() = 0;

};


#endif //DERIVED_ROCKETBUILDER_H
