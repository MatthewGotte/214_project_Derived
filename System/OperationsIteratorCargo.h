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

    /**
     * @brief To keep track of the current position in the vector
     * 
     */
    int currentpos;

    /**
     * @brief To iterate through the vector of Cargo
     * 
     */
    vector<Cargo*> itlist;

public:

    /**
     * @brief Construct a new Operations Iterator Cargo object
     * 
     * @param vect 
     */
    OperationsIteratorCargo(vector<Cargo*> vect){
        itlist = vect;
    };

    /**
     * @brief Return the first human in the list 
     * 
     * @return Human* 
     */
    virtual Cargo* first();

    /**
     * @brief Return the next Cargo in the list 
     * 
     * @return Human* 
     */
    virtual Cargo* next();

    /**
     * @brief check whether we have next Cargo or not
     * 
     * @return true 
     * @return false 
     */
    virtual bool hasNext();


    /**
     * @brief Return the current human in the list
     * 
     * @return Human* 
     */
    virtual Cargo* current();

    /**
     * @brief Destroy the Operations Iterator Cargo object
     * 
     */
    virtual ~OperationsIteratorCargo(){};
};


#endif //DERIVED_OPERATIONSITERATOR_H
