#ifndef DERIVED_OPERATIONSITERATORCARGO_H
#define DERIVED_OPERATIONSITERATORCARGO_H

#include <iostream>
#include <vector>
#include "Cargo.h"

using namespace std;

class Cargo;
class CargoIterator;

class OperationsIteratorCargo: public CargoIterator
{
    private:

        int currentpos{};
        vector<Cargo*> itlist;

    public:

        /**
         * @brief Construct a new Operations Iterator Cargo object
         * @author Derived
         * @param vect 
         */
        explicit OperationsIteratorCargo(vector<Cargo*> vect);

        /**
         * @brief Return the first Operation in the Iterator
         * @author Derived
         * @return Cargo* 
         */
        Cargo* first() override;

        /**
         * @brief Return the next Operation in the Iterator
         * @author Derived
         * @return Cargo* 
         */
        Cargo* next() override;

        /**
         * @brief Check if there is an Operation in the next Iterator
         * @author Derived
         * @return true 
         * @return false 
         */
        bool hasNext() override;

        /**
         * @brief Return the Current Operation in the Iterator
         * @author Derived
         * @return Cargo* 
         */
        Cargo* current() override;

        /**
         * @brief Destroy the Operations Iterator Cargo object
         * @author Derived
         */
        ~OperationsIteratorCargo() override=default;

};

#endif //DERIVED_OPERATIONSITERATOR_H
