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

    /**
     * @brief Construct a new Vector Of Cargo object
     * 
     */
    VectorOfCargo(){};

    /**
     * @brief Create a Cargo Iterator object
     * 
     * @return CargoIterator* 
     */
    virtual CargoIterator* createCargoIterator();
    
    /**
     * @brief add Cargo to the vector of Cargo:: Cargo Object
     * 
     */
    virtual void addCargo(Cargo*);

    /**
     * @brief remove a Cargo from the vector of Cargo:: Cargo Object
     * 
     */
    virtual void removeCargo(Cargo*);

    /**
     * @brief check whether the there is Cargo in the vector or not
     * 
     * @return true 
     * @return false 
     */
    virtual bool isEmpty();

    /**
     * @brief Destroy the Vector Of Cargo object
     * 
     */
    virtual ~VectorOfCargo(){};
    
};


#endif //DERIVED_VECTOROFCARGO_H
