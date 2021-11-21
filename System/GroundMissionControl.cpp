
#include "GroundMissionControl.h"
/**
 * @brief Construct a new Ground Mission Control:: Ground Mission Control object
 * @author Derived 
 */
GroundMissionControl::GroundMissionControl(){
}
/**
 * @brief 
 * @author Derived
 * @param addSatellite 
 */
void GroundMissionControl::attach(Satellite* addSatellite){
    
    this->satelliteList.push_back(addSatellite); 
    
}
/**
 * @brief 
 * @author Derived 
 * @param removeSatellite 
 */
void GroundMissionControl::detach(Satellite* removeSatellite){
    
    vector<Satellite*>::iterator it;
    
    for(it = this->satelliteList.begin(); it != this->satelliteList.end(); ++it)
    {
        if(*it == removeSatellite && *it != nullptr)
        {
            this->satelliteList.erase(it);
        }
    }
}
/**
 * @brief notifies all the Satellites objects of the update.
 * @author Derived 
 */
void GroundMissionControl::notify(){
    
    vector<Satellite*>::iterator it;
    
    for(it = this->satelliteList.begin(); it != this->satelliteList.end(); ++it)
    {
        (*it)->update();
    }
    
}
/**
 * @brief Destroy the Ground Mission Control:: Ground Mission Control object
 * @author Derived 
 */
GroundMissionControl::~GroundMissionControl(){
    
    vector<Satellite*>::iterator it;
    
    for(it = this->satelliteList.begin(); it != this->satelliteList.end(); ++it)
    {
        delete *it;
    }
}