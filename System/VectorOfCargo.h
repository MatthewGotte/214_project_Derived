//
// Created by muzin on 2021/11/01.
//

#ifndef DERIVED_VECTOROFCARGO_H
#define DERIVED_VECTOROFCARGO_H
class CargoCollection;
#include <vector>
#include "CargoIterator.h"
#include "OperationsIteratorCargo.h"

#include <iostream>
using namespace std;

class VectorOfCargo: public CargoCollection {
private:
    vector<Cargo*>cargo;
public:
    VectorOfCargo(){};
    virtual CargoIterator* createCargoIterator();
    virtual void addCargo(Cargo*);
    virtual void removeCargo(Cargo*);
    virtual bool isEmpty();
    virtual ~VectorOfCargo(){};
};


#endif //DERIVED_VECTOROFCARGO_H
