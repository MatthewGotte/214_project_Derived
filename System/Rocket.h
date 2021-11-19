#ifndef __Rocket_h__
#define __Rocket_h__

#include "Payload.h"
#include "RocketState.h"

using namespace std;

class Rocket
{
public:
    Rocket(Payload * payload);
    virtual ~Rocket();

   //virtual void nextstage()=0;
    void setPayload(Payload * p);
    Payload * getPayload();
private:
    Payload * payload;
    RocketState* stage;
};

#endif