//
// Created by muzin on 2021/11/01.
//

#ifndef DERIVED_OPERATIONSITERATORHUMANS_H
#define DERIVED_OPERATIONSITERATORHUMANS_H

#include <vector>
#include "HumanIterator.h"

using namespace std;

class Human;

class OperationsIteratorHumans : public HumanIterator {
private:
    int currentpos;
    vector<Human*> itlist;
public:
    explicit OperationsIteratorHumans(vector<Human*> vect);
    Human* first() override;
    Human* next() override;
    bool hasNext() override;
    Human* current() override;
    ~OperationsIteratorHumans() override = default;

};


#endif //DERIVED_OPERATIONSITERATORHUMANS_H
