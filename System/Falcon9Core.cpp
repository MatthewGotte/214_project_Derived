
#include "Falcon9Core.h"
Falcon9Core::Falcon9Core() {

}
void Falcon9Core::addEngine(MerlinEngine * engine) {
    this->engines.push_back(engine);
}

Falcon9Core *Falcon9Core::clone() {
    return new Falcon9Core();
}

int Falcon9Core::getMerlinNumber() {
    return this->merlinengines;
}

