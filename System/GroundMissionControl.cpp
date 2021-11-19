
#include "GroundMissionControl.h"

GroundMissionControl::GroundMissionControl(){
}

void GroundMissionControl::attach(Satellite* addSatellite){
    
    this->satelliteList.push_back(addSatellite); 
    
}

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

void GroundMissionControl::notify(){
    
    vector<Satellite*>::iterator it;
    
    for(it = this->satelliteList.begin(); it != this->satelliteList.end(); ++it)
    {
        //update add the satellites observers
        (*it)->update();
    }
    
}
        
GroundMissionControl::~GroundMissionControl(){
    
    vector<Satellite*>::iterator it;
    
    for(it = this->satelliteList.begin(); it != this->satelliteList.end(); ++it)
    {
        delete *it;
    }
}