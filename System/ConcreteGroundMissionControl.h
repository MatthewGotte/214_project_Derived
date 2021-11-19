#ifndef CONCRETEGROUNDMISSIONCONTROL_H
#define CONCRETEGROUNDMISSIONCONTROL_H

#include <iostream>
#include "GroundMissionControl.h"

using namespace std;

class ConcreteGroundMissionControl : public GroundMissionControl
{
    private:

        bool connection;

    public:

        ConcreteGroundMissionControl();

        bool hasConnected();

        void setConnection(bool);

        ~ConcreteGroundMissionControl();

};

#endif