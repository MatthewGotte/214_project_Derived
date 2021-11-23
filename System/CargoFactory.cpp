#include "CargoFactory.h"

CargoFactory::CargoFactory(/* args */) {
}

CargoFactory::~CargoFactory() {
}

Cargo* CargoFactory::createCargo(string name, double weight, string description) {
    return new Cargo(name,weight,description);
}