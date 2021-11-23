#ifndef __FalconHeavy_h__
#define __FalconHeavy_h__

#include "Rocket.h"

class FalconHeavy: public Rocket 
{
    public:

        /**
         * @brief Move to Next Stage of Falcon Heavy 
         * @author Derived
         */
        void nextstage();
        
        /**
         * @brief Construct a new Falcon Heavy object
         * @author Derived
         * @param payload 
         */
        FalconHeavy(Payload * payload);

        /**
         * @brief Destroy the Falcon Heavy object
         * @author Derived
         */
        ~FalconHeavy();
        
        /**
         * @brief Get the Name object
         * 
         * @return string 
         */
        string getName();

};

#endif
