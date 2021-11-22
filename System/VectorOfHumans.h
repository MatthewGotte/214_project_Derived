#ifndef DERIVED_VECTOROFHUMANS_H
#define DERIVED_VECTOROFHUMANS_H

#include <iostream>
#include <vector>
#include "HumanCollection.h"
#include "HumanIterator.h"
#include "OperationsIteratorHumans.h"

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
