
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
    string getName();
    double getWeight();
    Human(string name, double weight, string role);
    ~Human();
};
#endif
