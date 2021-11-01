#ifndef DERIVED_OPERATIONSITERATORCARGO_H
#define DERIVED_OPERATIONSITERATORCARGO_H

#include "CargoIterator.h"
#include "Cargo.h"
#include <vector>

#include <iostream>
using namespace std;


class Cargo;

class OperationsIteratorCargo: public CargoIterator {
private:
    int currentpos;
    vector<Cargo*> itlist;
public:
    OperationsIteratorCargo(vector<Cargo*> vect){
        itlist = vect;
    };
    virtual Cargo* first();
    virtual Cargo* next();
    virtual bool hasNext();
    virtual Cargo* current();
    virtual ~OperationsIteratorCargo(){};
};


#endif //DERIVED_OPERATIONSITERATOR_H
