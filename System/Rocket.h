#ifndef __Rocket_h__
#define __Rocket_h__

#include "Payload.h"
#include "RocketState.h"
#include "Propulsion.h"

using namespace std;

class Rocket
{

    private:

        bool readytolaunch;
        bool hasbeentested;
        string name;

    protected:

        Payload * payload;
        RocketState* stage;
        Propulsion * propulsion;

    public:

        /**
         * @brief Construct a new Rocket object
         * @author Derived 
         * @param payload 
         */
        Rocket(Payload * payload);

        /**
         * @brief Destroy the Rocket object
         * @author Derived 
         */
        virtual ~Rocket();

        /**
         * @brief Go to Next Stage of Rocket 
         * @author Derived 
         */
        virtual void nextstage()=0;

        /**
         * @brief Set the Payload 
         * @author Derived 
         * @param p 
         */
        void setPayload(Payload * p);

        /**
         * @brief Print Rocket State
         * @author Derived 
         */
        void print();

        /**
         * @brief Get the Payload 
         * @author Derived 
         * @return Payload* 
         */
        Payload * getPayload();

        /**
         * @brief Set the Rocket State 
         * @author Derived 
         * @param state 
         */
        void setState(RocketState *state);

        /**
         * @brief Set the Propulsion 
         * @author Derived 
         * @param p 
         */
        void setPropulsion(Propulsion * p);

        /**
         * @brief Launch Rocket object
         * @author Derived 
         */
        void launch();
        
        /**
         * @brief Test Rocket object
         * @author Derived 
         */
        void testRocket();

        /**
         * @brief Test Propulsion
         * @author Derived 
         * @return true 
         * @return false 
         */
        bool testPropulsion();

        /**
         * @brief Test Vacuum Merlin Engine
         * @author Derived 
         * @return true 
         * @return false 
         */
        bool testVacuumMerlinEngine();

        /**
         * @brief Set the Name 
         * @author Derived 
         * @param name 
         */
        void setName(string name);

        /**
         * @brief Get the Name object
         * @author Derived  
         * @return string 
         */
        virtual string getName()=0;
        
        /**
         * @brief This Test will always fail.
         * @author Derived
         */
        void testThatFails();
};

#endif