
#ifndef __GroundMissionControl_h__
#define __GroundMissionControl_h__

#include "Satellite.h"
#include <vector>

class GroundMissionControl; //Subject

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
