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
    HumanCollection * humans;
    CargoCollection * cargo;
public:
    Collection();
    ~Collection();

    HumanCollection * getHumans();
    CargoCollection * getCargo();

};


#endif //DERIVED_COLLECTION_H
