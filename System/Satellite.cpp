#include "Satellite.h"

Satellite::Satellite() {

}

void Satellite::ConnectionChanged() {
    this->mediator->notify(this);
}

Satellite::~Satellite() {

}