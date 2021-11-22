#ifndef __StarLinkSatellite_h__
#define __StarLinkSatellite_h__

#include <iostream>
//#include "Colours.h"
#include "Satellite.h"
#include "ConcreteGroundMissionControl.h"

using namespace std;

// class ConcreteGroundMissionControl;

class StarLinkSatellite: public Satellite
{
    private:

        ConcreteGroundMissionControl* missionControl;

        bool communicating;

        string connection;

        string name;

    public:

        StarLinkSatellite(ConcreteGroundMissionControl*);

        StarLinkSatellite(string);

        StarLinkSatellite * clone();

        string getName();
        
        void setName(string);

        void update();

        void print();

        string getConnection();

        void setConnection(string);

        ~StarLinkSatellite();
    
};

#endif
