#ifndef DERIVED_OPERATIONSITERATORCARGO_H
#define DERIVED_OPERATIONSITERATORCARGO_H

class CargoIterator;

#include <iostream>
#include <vector>
#include "Cargo.h"

using namespace std;

class Cargo;

class OperationsIteratorCargo: public CargoIterator {
private:
    int currentpos{};
    vector<Cargo*> itlist;
public:
    explicit OperationsIteratorCargo(vector<Cargo*> vect);
    Cargo* first() override;
    Cargo* next() override;
    bool hasNext() override;
    Cargo* current() override;
    ~OperationsIteratorCargo() override= default;;
};


#endif //DERIVED_OPERATIONSITERATOR_H
