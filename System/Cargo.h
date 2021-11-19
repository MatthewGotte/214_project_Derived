
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
        string description ;
    public:
        Cargo(string , double  , string);
        string getName();
        string getDesription();
        double getWeight();
        ~Cargo();
};

#endif
