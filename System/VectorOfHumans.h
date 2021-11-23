#ifndef DERIVED_VECTOROFHUMANS_H
#define DERIVED_VECTOROFHUMANS_H

#include <iostream>
#include <vector>
#include "HumanCollection.h"
#include "HumanIterator.h"
#include "OperationsIteratorHumans.h"

using namespace std;

class VectorOfHumans : public HumanCollection 
{
    private:

        vector<Human*> people;

    public:

        /**
         * @brief Construct a new Vector Of Humans object
         * @author Derived
         */
        VectorOfHumans();

        /**
         * @brief Create a Human Iterator object
         * @author Derived
         * @return HumanIterator* 
         */
        HumanIterator* createHumanIterator()override;

        /**
         * @brief Add Human to Vector
         * @author Derived
         */
        void addHuman(Human*)override;

        /**
         * @brief Remove Human from Vector
         * @author Derived
         */
        void removeHuman(Human*) override;
        
        /**
         * @brief Check if the Vector is empty
         * @author Derived
         * @return true 
         * @return false 
         */
        bool isEmpty() override;

        /**
         * @brief Destroy the Vector Of Humans object
         * @author Derived
         */
        ~VectorOfHumans() override;

};

#endif //DERIVED_VECTOROFHUMANS_H
