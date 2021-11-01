//
// Created by muzin on 2021/11/01.
//

#ifndef DERIVED_VECTOROFHUMANS_H
#define DERIVED_VECTOROFHUMANS_H
#include <vector>
#include "HumanCollection.h"
#include "HumanIterator.h"
#include "OperationsIteratorHumans.h"

class VectorOfHumans : public HumanCollection {
private:
    vector<Human*> people ;
public:
    VectorOfHumans();
    virtual HumanIterator* createHumanIterator()override;
    virtual void addHuman(Human*)override;
    virtual void removeHuman(Human*)override;
    virtual bool isEmpty()override;
    virtual ~VectorOfHumans();
};


#endif //DERIVED_VECTOROFHUMANS_H
