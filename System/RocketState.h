//
// Created by muzin on 2021/11/08.
//

#ifndef DERIVED_ROCKETSTATE_H
#define DERIVED_ROCKETSTATE_H

class Rocket;

class RocketState {
public:
    virtual void handleChange(Rocket* r)=0;
    virtual ~RocketState();
private:

};


#endif //DERIVED_ROCKETSTATE_H
