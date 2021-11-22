#ifndef DERIVED_F9STAGE2_H
#define DERIVED_F9STAGE2_H

#include "RocketState.h"

class Rocket;

class F9Stage2 : public RocketState 
{
    public:

        /**
         * @brief Handle Change of F9Stage1 object
         * @author Derived
         * @param r 
         */
        void handleChange(Rocket* r);

        /**
         * @brief Construct a new F9Stage2 object
         * @author Derived
         */
        F9Stage2();

        /**
         * @brief Destroy the F9Stage2 object
         * @author Derived
         */
        ~F9Stage2();
};


#endif //DERIVED_F9STAGE2_H
