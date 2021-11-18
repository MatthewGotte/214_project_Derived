//
// Created by muzin on 2021/11/01.
//

#include "OperationsIteratorHumans.h"

Human *OperationsIteratorHumans::next() {
    if(this->hasNext()){
        ++this->currentpos;
        return this->itlist.at(currentpos);
    }
    else{
        return nullptr;
    }

}

Human *OperationsIteratorHumans::current() {
    return this->itlist.at(currentpos);

}

bool OperationsIteratorHumans::hasNext() {
    if(currentpos<itlist.size()-1)
    {
        return true;
    }
    return false;

}

Human *OperationsIteratorHumans::first() {
    return this->itlist.at(0);

}
OperationsIteratorHumans::OperationsIteratorHumans(vector<Human *> vect) {
    this->itlist=vect;

}
