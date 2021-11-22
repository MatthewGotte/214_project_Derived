#ifndef __Human_h__
#define __Human_h__

#include <string>
#include "VectorOfHumans.h"

using namespace std;

class Human
{
    private:

        string name;
        double weight;
        string role;

    public:

        /**
         * @brief Get the Name 
         * @author Derived
         * @return string 
         */
        string getName();

        /**
         * @brief Get the Weight 
         * @author Derived
         * @return double 
         */
        double getWeight();

        /**
         * @brief Get the Role
         * @author Derived
         * @return string 
         */
        string getRole();

        /**
         * @brief Construct a new Human object
         * @author Derived
         * @param name 
         * @param weight 
         * @param role 
         */
        Human(string name, double weight, string role);

        /**
         * @brief Destroy the Human object
         * @author Derived
         */
        ~Human();
};
#endif
