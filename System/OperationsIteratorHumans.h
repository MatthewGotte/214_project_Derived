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

    /**
     * @brief To keep track of the current position in the vector
     * 
     */
    int currentpos;

    /**
     * @brief To iterate through the vector of Humans
     * 
     */
    vector<Human*> itlist;

public:

    /**
     * @brief Construct a new Operations Iterator Humans object
     * 
     * @param vect 
     */
    OperationsIteratorHumans(vector<Human*> vect){

        itlist = vect;
    };

    /**
     * @brief Return the first human in the list 
     * 
     * @return Human* 
     */
    virtual Human* first();

    /**
     * @brief Return the next human in the list 
     * 
     * @return Human* 
     */
    virtual Human* next();

    /**
     * @brief check whether we have a next human or not
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
    virtual Human* current();

    /**
     * @brief Destroy the Operations Iterator Humans object
     * 
     */
    virtual ~OperationsIteratorHumans(){};


};


#endif //DERIVED_OPERATIONSITERATORHUMANS_H
