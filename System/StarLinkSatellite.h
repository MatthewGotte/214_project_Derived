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

        /**
         * @brief Construct a new Star Link Satellite object
         * @author Derived
         */
        StarLinkSatellite(ConcreteGroundMissionControl*);

        /**
         * @brief Construct a new Star Link Satellite object
         * @author Derived
         */
        StarLinkSatellite(string);

        /**
         * @brief Clone the Star Link Satellite 
         * @author Derived
         * @return StarLinkSatellite* 
         */
        StarLinkSatellite * clone();

        /**
         * @brief Get the Name of the Star Link Satellite 
         * @author Derived
         * @return string 
         */
        string getName();
        
        /**
         * @brief Set the Name of the Star Link Satellite 
         * @author Derived
         */
        void setName(string);

        /**
         * @brief Update the Star Link Satellite 
         * @author Derived
         */
        void update();

        /**
         * @brief Print the Star Link Satellite 
         * @author Derived
         */
        void print();

        /**
         * @brief Get the Connection 
         * @author Derived
         * @return string 
         */
        string getConnection();

        /**
         * @brief Set the Connection 
         * @author Derived
         */
        void setConnection(string);

        /**
         * @brief Destroy the Star Link Satellite object
         * @author Derived
         */
        ~StarLinkSatellite();
    
};

#endif
