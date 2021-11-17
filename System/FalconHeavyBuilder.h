//
// Created by muzin on 2021/11/09.
//

#ifndef DERIVED_FALCONHEAVYBUILDER_H
#define DERIVED_FALCONHEAVYBUILDER_H

#include "RocketBuilder.h"
#include "Cargo.h"
#include "Human.h"
#include <vector>
#include <iostream>

class FalconHeavyBuilder : public RocketBuilder {
private:

    /**
     * @brief Create a vector of Cargo to maintain and traverse through the vector 
     * 
     */
    vector< Cargo* > cargo;

    /**
     * @brief Create a vector of Humans to maintain and traverse thtough the vector
     * 
     */
    vector< Human* > human;

public:

    /**
     * @brief Construct a new Falcon Heavy Builder object
     * 
     * @param c 
     * @param h 
     */
    FalconHeavyBuilder(vector< Cargo* > c, vector< Human* > h) : RocketBuilder() {

        this->cargo = c;

        this->human = h;

    };


    /**
     * @brief Destroy the Falcon Heavy Builder object
     * 
     */
    ~FalconHeavyBuilder();
};


#endif //DERIVED_FALCONHEAVYBUILDER_H
