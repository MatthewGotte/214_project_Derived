#include "VectorOfCargo.h"

void VectorOfCargo::addCargo(Cargo * cargo) {
    this->cargo.push_back(cargo);
}

bool VectorOfCargo::isEmpty() {
    if(this->cargo.empty()) {
        return true;
    }
    return false;
}

CargoIterator *VectorOfCargo::createCargoIterator() {
    return new OperationsIteratorCargo(this->cargo);
}

void VectorOfCargo::removeCargo(Cargo *cargos) {
    if(this->isEmpty()) {
        return;
    } else{
        vector<Cargo*>:: iterator it;
        for (it= cargo.begin() ; it != cargo.end() ; ++it) {
            if(cargos == *it ) {
                cargo.erase(it);
            }
        }
    }
}

VectorOfCargo::~VectorOfCargo(){
    vector<Cargo*>:: iterator it;
    for(it= cargo.begin() ; it != cargo.end() ; ++it) {
        delete *it;
    }
}

VectorOfCargo::VectorOfCargo() = default;