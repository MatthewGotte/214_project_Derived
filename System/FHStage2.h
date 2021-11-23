#ifndef DERIVED_FHSTAGE2_H
#define DERIVED_FHSTAGE2_H

#include "RocketState.h"

class Rocket;

class FHStage2: public RocketState 
{
    public:
    
        /**
         * @brief Handle Change of FHStage2 
         * @author Derived
         * @param r 
         */
        void handleChange(Rocket* r);

        /**
         * @brief Construct a new FHStage2 object
         * @author Derived
         */
        FHStage2();

        /**
         * @brief Destroy the FHStage2 object
         * @author Derived
         */
        ~FHStage2();
};


#endif //DERIVED_FHSTAGE2_H
