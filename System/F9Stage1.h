#ifndef DERIVED_F9STAGE1_H
#define DERIVED_F9STAGE1_H

#include "RocketState.h"

class Rocket;

class F9Stage1 : public RocketState 
{
    public:

        /**
         * @brief Handle Change of F9Stage1 object
         * @author Derived
         * @param r 
         */
        void handleChange(Rocket* r);

        /**
         * @brief Construct a new F9Stage1 object
         * @author Derived
         */
        F9Stage1();

        /**
         * @brief Destroy the F9Stage1 object
         * @author Derived
         */
        ~F9Stage1();

};


#endif //DERIVED_F9STAGE1_H
