#ifndef DERIVED_VECTOROFCARGO_H
#define DERIVED_VECTOROFCARGO_H

#include <iostream>
#include <vector>
#include "CargoIterator.h"
#include "OperationsIteratorCargo.h"


using namespace std;

class CargoCollection;

class VectorOfCargo: public CargoCollection
{
    private:

        vector<Cargo*>cargo;

    public:

        /**
         * @brief Construct a new Vector Of Cargo object
         * @author Derived
         */
        VectorOfCargo();

        /**
         * @brief Create a Cargo Iterator object
         * @author Derived
         * @return CargoIterator* 
         */
        CargoIterator* createCargoIterator() override;

        /**
         * @brief Add Cargo to the Vector
         * @author Derived
         */
        void addCargo(Cargo*) override;

        /**
         * @brief Remove Cargo from the Vector
         * @author Derived
         */
        void removeCargo(Cargo*) override;

        /**
         * @brief Check if the Vector is empty
         * @author Derived
         * @return true 
         * @return false 
         */
        bool isEmpty() override;

        /**
         * @brief Destroy the Vector Of Cargo object
         * @author Derived
         */
        ~VectorOfCargo() ;

};

#endif //DERIVED_VECTOROFCARGO_H
