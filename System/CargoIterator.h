
#ifndef __CargoIterator_h__
#define __CargoIterator_h__


#include "CargoCollection.h"
class Cargo;
class CargoIterator
{
public:
    CargoIterator()= default;;
    virtual Cargo* first()=0;
    virtual Cargo* next()=0;
    virtual bool hasNext()=0;
    virtual Cargo* current()=0;
    virtual ~CargoIterator()= default;;
};

#endif
