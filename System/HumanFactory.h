#ifndef HUMANFACTORY_H
#define HUMANFACTORY_H

#include "Human.h"
#include "Colours.h"

class HumanFactory
{
    private:
        
    public:

        /**
         * @brief Construct a new Human Factory object
         * @author Derived
         */
        HumanFactory();

        /**
         * @brief Destroy the Human Factory object
         * @author Derived
         */
        ~HumanFactory();

        /**
         * @brief Create a Human object
         * @author Derived
         * @param name 
         * @param weight 
         * @param role 
         * @return Human* 
         */
        Human* createHuman(string name, double weight, string role);
};


#endif