#include "LaunchMode.h"

LaunchMode::LaunchMode(Simulation * obj) {
    receiver = obj;

}

void LaunchMode:: execute() {
    this->getR()->liftOff();


}

Simulation * LaunchMode:: getR() {
    return receiver;
}