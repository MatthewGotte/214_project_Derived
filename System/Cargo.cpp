#include "Cargo.h"

Cargo::Cargo(string name , double weight , string descp) {
     if (weight <= 0) {
        throw std::invalid_argument("weight must be greater than zero");
        return;
    }
    this->name = name;
    this->weight = weight;
    this->description = descp;
}

string Cargo::getName() {
    return this->name;
}

string Cargo::getDescription() {
    return this->description;
}

double Cargo:: getWeight() {
    return this->weight;
}

Cargo::~Cargo() {}