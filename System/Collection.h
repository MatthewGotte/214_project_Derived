//
// Created by muzin on 2021/11/01.
//

#ifndef DERIVED_COLLECTION_H
#define DERIVED_COLLECTION_H

#include "HumanCollection.h"
#include "CargoCollection.h"

#include "Human.h"
#include "Cargo.h"

#include <vector>

using namespace std;

class Collection {
    
    private:

        /**
         * @brief a reference to HumanCollection:: humans*
         * 
         */
        HumanCollection * humans;

        /**
         * @brief a reference to CargoCollection:: cargo*
         * 
         */
        CargoCollection * cargo;

    public:

        /**
         * @brief Construct a new Collection:: Collection object and set humans and cargo to null
         * 
         */
        Collection();

        /**
         * @brief Destroy the Collection:: Collection object
         * 
         */
        ~Collection();

        /**
         * @brief Return a collection of humans or one human if necessary:: human object(s)
         * 
         * @return HumanCollection* 
         */
        HumanCollection * getHumans();

        /**
         * @brief Return a collection of cargos or one type of cargo if necessary:: cargo object(s) 
         * 
         * @return CargoCollection* 
         */
        CargoCollection * getCargo();

};


#endif //DERIVED_COLLECTION_H
