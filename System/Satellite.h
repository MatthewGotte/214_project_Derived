#ifndef __Satellite_h__
#define __Satellite_h__

#include <iostream>
#include <string>
#include "VacuumMerlinEngine.h"
#include "SatelliteTransmission.h"
#include "Cargo.h"

class SatelliteTransmission;

using namespace std; 

class Satellite : public Cargo
{
    private:

        VacuumMerlinEngine* vacuumMerlinEngine;
        SatelliteTransmission* mediator;
        string name;

    public:

        /**
         * @brief Construct a new Satellite object
         * @author Derived
         */
        Satellite();

        /**
         * @brief Nofity Satellite when Connection Change occurs
         * @author Derived
         */
        void ConnectionChanged();

        /**
         * @brief Get the Connection 
         * @author Derived
         * @return string 
         */
        virtual string getConnection() = 0;

        /**
         * @brief Set the Connection 
         * @author Derived
         */
        virtual void setConnection(string) = 0;

        /**
         * @brief Update the Satellite 
         * @author Derived
         */
        virtual void update() = 0;

        /**
         * @brief Print the Satellite 
         * @author Derived
         */
        virtual void print() = 0;

        /**
         * @brief Destroy the Satellite object
         * @author Derived
         */
        ~Satellite();

};

#endif
