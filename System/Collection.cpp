//
// Created by muzin on 2021/11/01.
//

#include "Collection.h"

Collection::Collection(){
    this->humans = nullptr;
    this->cargo = nullptr;
}

Collection::~Collection() {

    delete this->cargo;
    delete this->humans;

    this->cargo = nullptr;
    this->humans = nullptr;
}

HumanCollection *Collection::getHumans() {
    return this->humans;
}

CargoCollection *Collection::getCargo() {
    return this->cargo;
}