#ifndef __GroundMissionControl_h__
#define __GroundMissionControl_h__

#include <vector>
using namespace std;
#include "Satellite.h"

class GroundMissionControl
{
    private:

        vector<Satellite*> satelliteList;

    public:

        GroundMissionControl();

        void attach(Satellite*);

        void detach(Satellite*);

        void notify();
        
        ~GroundMissionControl();

};

#endif
