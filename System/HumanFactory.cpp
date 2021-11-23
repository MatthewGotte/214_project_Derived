#include "HumanFactory.h"

HumanFactory::HumanFactory() {
}

HumanFactory::~HumanFactory() {
}

Human* HumanFactory::createHuman(string name, double weight, string role) {
    return new Human(name,weight,role);
}