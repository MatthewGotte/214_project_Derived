#ifndef CARGOFACTORY_H
#define CARGOFACTORY_H

#include "Cargo.h"
#include "Colours.h"

class CargoFactory
{
    private:
        
    public:

        /**
         * @brief Construct a new Cargo Factory object
         * @author Derived
         */
        CargoFactory();

        /**
         * @brief Destroy the Cargo Factory object
         * @author Derived
         */
        ~CargoFactory();

        /**
         * @brief Create a Cargo object
         * @author Derived
         * @param name 
         * @param weight 
         * @param description 
         * @return Cargo* 
         */
        Cargo* createCargo(string name, double weight, string description);

};

#endif