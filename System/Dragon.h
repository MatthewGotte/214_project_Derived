#ifndef __Dragon_h__
#define __Dragon_h__

#include "SpaceCraft.h"
#include "CargoCollection.h"

class Dragon: public SpaceCraft
{
private:
    CargoCollection * c;
public:
    Dragon (CargoCollection * c);
    ~Dragon();

    void printSpaceCraft();
};

#endif
