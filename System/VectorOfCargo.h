//
// Created by muzin on 2021/11/01.
//

#ifndef DERIVED_VECTOROFCARGO_H
#define DERIVED_VECTOROFCARGO_H

#include <vector>
class CargoCollection;
#include "CargoIterator.h"
#include "OperationsIteratorCargo.h"

#include <iostream>
using namespace std;

class VectorOfCargo: public CargoCollection {
private:
    vector<Cargo*>cargo;
public:
    VectorOfCargo();
    CargoIterator* createCargoIterator() override;
    void addCargo(Cargo*) override;
    void removeCargo(Cargo*) override;
    bool isEmpty() override;
    ~VectorOfCargo() ;
};


#endif //DERIVED_VECTOROFCARGO_H
