#include "Satellite.h"

Satellite::Satellite():Cargo("Satellite",800,"Star Link Satellite") {

}

void Satellite::ConnectionChanged() {
    this->mediator->notify(this);
}

Satellite::~Satellite() {

}