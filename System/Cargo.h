#ifndef __Cargo_h__
#define __Cargo_h__

#include <string>
#include "VectorOfCargo.h"

using namespace std;

class Cargo
{
    private:

        string name;
        double weight;
        string description;

    public:

        /**
         * @brief Construct a new Cargo object
         * @author Derived
         * @param name 
         * @param weight 
         * @param descp 
         */
        Cargo (string name, double weight, string descp);
        
        /**
         * @brief Get the Name
         * @author Derived
         * @return string 
         */
        string getName();
        
        /**
         * @brief Get the Description
         * @author Derived
         * @return string 
         */
        string getDescription();

        /**
         * @brief Get the Weight
         * @author Derived 
         * @return double 
         */
        double getWeight();

        /**
         * @brief Destroy the Cargo object
         * @author Derived
         */
        ~Cargo();
        
};

#endif
