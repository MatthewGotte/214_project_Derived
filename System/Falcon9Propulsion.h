//
// Created by matth on 2021/11/18.
//

#ifndef DERIVED_FALCON9PROPULSION_H
#define DERIVED_FALCON9PROPULSION_H

#include "Propulsion.h"
#include "Falcon9Core.h"
#include "Payload.h"
#include "PropulsionMemento.h"

class Falcon9Propulsion : public Propulsion {
private:
    Falcon9Core * core1;
    Payload * payload;
public:
    Falcon9Propulsion(Payload * p);
    ~Falcon9Propulsion();
    PropulsionMemento* backup ();
    void restore(PropulsionMemento * );
    void land();
    void launch();
};

#endif //DERIVED_FALCON9PROPULSION_H