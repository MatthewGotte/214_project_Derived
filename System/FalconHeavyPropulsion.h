#ifndef DERIVED_FALCONHEAVYPROPULSION_H
#define DERIVED_FALCONHEAVYPROPULSION_H

#include "Propulsion.h"
#include "Falcon9Core.h"
#include "Payload.h"
#include "FalconHeavyPropulsionMemento.h"

class FalconHeavyPropulsion : public Propulsion {
private:
    Falcon9Core * core1;
    Falcon9Core * core2;
    Falcon9Core * core3;

    Payload * payload;

public:
    FalconHeavyPropulsion(Payload * p);
    ~FalconHeavyPropulsion();
    FalconHeavyPropulsionMemento* backup();
    void restore(FalconHeavyPropulsionMemento * );
    void land();
    void launch();
};


#endif //DERIVED_FALCONHEAVYPROPULSION_H
