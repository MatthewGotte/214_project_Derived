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

    /**
     * @brief a vector to maintain and traverse through the vector of Humans
     * 
     */
    vector<Human*> people;

public:

    VectorOfHumans();

    /**
     * @brief Create a Human Iterator object
     * 
     * @return HumanIterator* 
     */
    virtual HumanIterator* createHumanIterator()override;

    /**
     * @brief add a Human to the vector of hummans:: Human Object
     * 
     */
    virtual void addHuman(Human*)override;

    /**
     * @brief remove a Human from the vector of humans:: Human Object 
     * 
     */
    virtual void removeHuman(Human*)override;

    /**
     * @brief check whether the there are humans in the vector or not
     * 
     * @return true 
     * @return false 
     */
    virtual bool isEmpty()override;

    /**
     * @brief Destroy the Vector Of Humans object
     * 
     */
    virtual ~VectorOfHumans();
};


#endif //DERIVED_VECTOROFHUMANS_H
