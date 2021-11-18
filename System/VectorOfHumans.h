//
// Created by muzin on 2021/11/01.
//

#ifndef DERIVED_VECTOROFHUMANS_H
#define DERIVED_VECTOROFHUMANS_H
#include <vector>
#include "HumanCollection.h"
#include "HumanIterator.h"
#include "OperationsIteratorHumans.h"
#include <iostream>
using namespace std;
class VectorOfHumans : public HumanCollection {
private:
    vector<Human*> people ;
public:
    VectorOfHumans();
    HumanIterator* createHumanIterator()override;
    void addHuman(Human*)override;
    void removeHuman(Human*)override;
    bool isEmpty()override;
    ~VectorOfHumans() override;
};


#endif //DERIVED_VECTOROFHUMANS_H
