#include "Human.h"
#include <stdexcept>

Human::Human(string name, double weight, string role) {

    if (weight <= 0) {
        throw std::invalid_argument("weight must be greater than zero");
        return;
    }

    this->weight = weight;
    this->name = name;
    this->role = role;
}

string Human::getName() {
    return name;
}

double Human::getWeight() {
    return weight;
}

Human::~Human() {
    
}

string Human::getRole() {
    return role;
}