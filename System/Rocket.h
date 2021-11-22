#ifndef __Rocket_h__
#define __Rocket_h__

#include "Payload.h"
#include "RocketState.h"
#include "Propulsion.h"

using namespace std;

class Rocket
{
private:
    bool readytolaunch;
    bool hasbeentested;
    string name;
protected:
    Payload * payload;
    RocketState* stage;
    
    Propulsion * propulsion;
public:
    Rocket(Payload * payload);
    virtual ~Rocket();

    virtual void nextstage()=0;
    void setPayload(Payload * p);
    void print();
    Payload * getPayload();
    void setState(RocketState *state);
    void setPropulsion(Propulsion * p);

    void launch();
    
    void testRocket();

    bool testPropulsion();
    bool testVacuumMerlinEngine();

    void setName(string name);

};
#endif