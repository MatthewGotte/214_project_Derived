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

        /**
         * @brief Construct a new Concrete Ground Mission Control object
         * @author Derived
         */
        ConcreteGroundMissionControl();

        /**
         * @brief Check if the Concrete object is Connected
         * @author Derived
         * @return true 
         * @return false 
         */
        bool hasConnected();

        /**
         * @brief Set the Connection of the Concrete object
         * @author Derived
         */
        void setConnection(bool);

        /**
         * @brief Destroy the Concrete Ground Mission Control object
         * @author Derived
         */
        ~ConcreteGroundMissionControl();

};

#endif