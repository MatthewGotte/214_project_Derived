
#ifndef __GroundMissionControl_h__
#define __GroundMissionControl_h__

#include "Satellite.h"
#include <vector>

class GroundMissionControl; //Subject

class GroundMissionControl
{
    private:
        /**
         * @brief use a vector to maintain as well as traverse through the satellites
         * 
         */
        vector<Satellite*> satelliteList;

    public:

        /**
         * @brief Construct a new Ground Mission Control object
         * 
         */
        GroundMissionControl();

        /**
         * @brief attach a Satellite to the back of the list of Satellites:: Satellite Object 
         * 
         * @param addSatellite 
         */
        void attach(Satellite*);


        /**
         * @brief detach a specific SatelliteObject from the Satellite list:: Satellite Object
         * 
         * @param removeSatellite 
         */
        void detach(Satellite*);

        /**
         * @brief Notify all the Satellite Obeservers observing from both the Ground and the ISS
         * 
         */
        void notify();

        /**
         * @brief Destroy the Ground Mission Control:: Ground Mission Control object
         * 
         */
        ~GroundMissionControl();

};

#endif
