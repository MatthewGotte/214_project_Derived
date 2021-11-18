#ifndef DERIVED_ROCKETSTATE_H
#define DERIVED_ROCKETSTATE_H

class Rocket;
class RocketState {
public:
    virtual void handleChange(Rocket* r)=0;
    RocketState();
    virtual ~RocketState();
private:

};

#endif //DERIVED_ROCKETSTATE_H
