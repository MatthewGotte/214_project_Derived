
#ifndef __Human_h__
#define __Human_h__
#include <string>
#include "VectorOfHumans.h"
using namespace std;
class Human
{
private:

    /**
     * @brief Name of the Human
     * 
     */
    string name;

    /**
     * @brief Weight of the human
     * 
     */
    double weight;

public:

    /**
     * @brief Get the Name object
     * 
     * @return string 
     */
    string getName();

    /**
     * @brief Get the Weight object
     * 
     * @return double 
     */
    double getWeight();

    /**
     * @brief Construct a new Human object
     * 
     * @param name 
     * @param weight 
     */
    Human(string name, double weight);

    /**
     * @brief Destroy the Human object
     * 
     */
    ~Human();

};
#endif
