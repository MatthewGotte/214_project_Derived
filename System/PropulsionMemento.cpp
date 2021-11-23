#include "PropulsionMemento.h"

PropulsionMemento::PropulsionMemento(Falcon9Core * core , Payload * pay ) {
    this->core = core;
    this->payload = pay;
}

Falcon9Core * PropulsionMemento::getCore() {
    return this->core;
}

Payload * PropulsionMemento::getPay() {
    return this->payload;
}

