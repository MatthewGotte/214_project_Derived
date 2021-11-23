#include "OperationsIteratorCargo.h"
#include <utility>

Cargo *OperationsIteratorCargo::next() {
    if (this->hasNext()) {
        ++this->currentpos;
        return this->itlist.at(currentpos);
    } else {
        return nullptr;
    }
}

Cargo *OperationsIteratorCargo::current() {
    return this->itlist.at(currentpos);
}

bool OperationsIteratorCargo::hasNext() {
    if (currentpos<itlist.size()-1) {
        return true;
    }
    return false;
}

Cargo *OperationsIteratorCargo::first() {
    return this->itlist.at(0);
}

OperationsIteratorCargo::OperationsIteratorCargo(vector<Cargo *> vect) {
    this->itlist = std::move(vect);
}
