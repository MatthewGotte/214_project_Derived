
#ifndef __StarLinkSatellite_h__
#define __StarLinkSatellite_h__

#include "Satellite.h"
#include "Colours.h"
#include "ConcreteGroundMissionControl.h"
#include <iostream>
using namespace std;
// class Satellite;
class StarLinkSatellite; //Concrete Observer

class StarLinkSatellite: public Satellite
{
    private:

        ConcreteGroundMissionControl* missionControl;

        bool communicating;

        string name;

    public:

        StarLinkSatellite(ConcreteGroundMissionControl*);

        StarLinkSatellite(string);

        StarLinkSatellite * clone();

        string getName();
        
        void setName(string);

        void update();

        void print();

        ~StarLinkSatellite();
    
};

#endif
