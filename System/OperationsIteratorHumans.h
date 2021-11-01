//
// Created by muzin on 2021/11/01.
//

#ifndef DERIVED_OPERATIONSITERATORHUMANS_H
#define DERIVED_OPERATIONSITERATORHUMANS_H
#include "HumanIterator.h"
#include <vector>
class Human;
using namespace std;
class OperationsIteratorHumans : public HumanIterator {
private:
    int currentpos;
    vector<Human*> itlist;
public:
    OperationsIteratorHumans(vector<Human*> vect){
        itlist = vect;
    };
    virtual Human* first();
    virtual Human* next();
    virtual bool hasNext();
    virtual Human* current();
    virtual ~OperationsIteratorHumans(){};

};


#endif //DERIVED_OPERATIONSITERATORHUMANS_H
