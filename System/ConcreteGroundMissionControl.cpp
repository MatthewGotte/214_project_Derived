#include "ConcreteGroundMissionControl.h"

ConcreteGroundMissionControl::ConcreteGroundMissionControl() {
    this->connection = false;
}

bool ConcreteGroundMissionControl::hasConnected() {
    return this->connection;
}

void ConcreteGroundMissionControl::setConnection(bool setConnection) {
    this->connection = setConnection;
}

ConcreteGroundMissionControl::~ConcreteGroundMissionControl() {

}
