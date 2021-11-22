#ifndef DERIVED_FHSTAGE1_H
#define DERIVED_FHSTAGE1_H

#include "RocketState.h"

class Rocket;

class FHStage1: public RocketState 
{
    public:

        /**
         * @brief Handle Change of FHStage1 object
         * @author Derived
         * @param r 
         */
        void handleChange(Rocket* r);

        /**
         * @brief Construct a new FHStage1 object
         * @author Derived
         */
        FHStage1();

        /**
         * @brief Destroy the FHStage1 object
         * @author Derived
         */
        ~FHStage1();
};


#endif //DERIVED_FHSTAGE1_H
