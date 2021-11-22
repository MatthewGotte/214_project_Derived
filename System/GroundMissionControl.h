#ifndef __GroundMissionControl_h__
#define __GroundMissionControl_h__

#include <vector>
#include "Satellite.h"

using namespace std;

class GroundMissionControl
{
    private:

        vector<Satellite*> satelliteList;

    public:

        /**
         * @brief Construct a new Ground Mission Control object
         * @author Derived
         */
        GroundMissionControl();

        /**
         * @brief Attach Satellite from the Ground Mission Control object
         * @author Derived
         */
        void attach(Satellite*);

        /**
         * @brief Detach Satellite from the Ground Mission Control object
         * @author Derived
         */
        void detach(Satellite*);

        /**
         * @brief Notify the Ground Mission Control object
         * @author Derived
         */
        void notify();
        
        /**
         * @brief Destroy the Ground Mission Control object
         * @author Derived
         */
        ~GroundMissionControl();

};

#endif
