#include "ConcreteGroundMissionControl.h"
/**
 * @brief Construct a new Concrete Ground Mission Control:: Concrete Ground Mission Control object
 * @author Derived 
 */
ConcreteGroundMissionControl::ConcreteGroundMissionControl()
{
    this->connection = false;
}

/**
 * @brief return a boolean if ground mission control is connected to the spaceship
 * @author Derived
 * @return true 
 * @return false 
 */
bool ConcreteGroundMissionControl::hasConnected()
{
    return this->connection;
}
/**
 * @brief set the connection of the ground mission control 
 * @author Derived 
 * @param setConnection 
 */
void ConcreteGroundMissionControl::setConnection(bool setConnection)
{
    this->connection = setConnection;
}
/**
 * @brief Destroy the Concrete Ground Mission Control:: Concrete Ground Mission Control object
 * @author Derived 
 */
ConcreteGroundMissionControl::~ConcreteGroundMissionControl(){}
