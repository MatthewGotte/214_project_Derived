#ifndef DERIVED_OPERATIONSITERATORHUMANS_H
#define DERIVED_OPERATIONSITERATORHUMANS_H

#include <vector>
#include "HumanIterator.h"

using namespace std;

class Human;

class OperationsIteratorHumans : public HumanIterator 
{
    private:

        int currentpos;
        vector<Human*> itlist;

    public:
        
        /**
         * @brief Construct a new Operations Iterator Humans object
         * @author Derived
         * @param vect 
         */
        explicit OperationsIteratorHumans(vector<Human*> vect);
        
        /**
         * @brief Return the first Human in the Iterator
         * @author Derived
         * @return Human* 
         */
        Human* first() override;
        
        /**
         * @brief Return the next Human in the Iterator
         * @author Derived
         * @return Human* 
         */
        Human* next() override;
        
        /**
         * @brief Check if there is a Human in the next Iterator
         * @author Derived
         * @return true 
         * @return false 
         */
        bool hasNext() override;
        
        /**
         * @brief Return the current Human in the Iterator
         * @author Derived
         * @return Human* 
         */
        Human* current() override;
        
        /**
         * @brief Destroy the Operations Iterator Humans object
         * @author Derived
         */
        ~OperationsIteratorHumans() override=default;

};

#endif //DERIVED_OPERATIONSITERATORHUMANS_H
