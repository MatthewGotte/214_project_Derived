
#ifndef __CargoCollection_h__
#define __CargoCollection_h__

class Cargo;
class CargoIterator;

class CargoCollection{

public:

    CargoCollection() = default;

    virtual CargoIterator* createCargoIterator()=0;

    virtual void addCargo(Cargo*)=0;

    virtual void removeCargo(Cargo*)=0;

    virtual bool isEmpty()=0;

    virtual ~CargoCollection()= default;

};

#endif
