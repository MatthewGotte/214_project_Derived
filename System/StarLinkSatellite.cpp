#include "Colours.h"
#include "StarLinkSatellite.h"
/**
 * @brief Construct a new Star Link Satellite:: Star Link Satellite object
 * @author Derived  
 * @param setMissionControl 
 */
StarLinkSatellite::StarLinkSatellite(ConcreteGroundMissionControl* setMissionControl){
    
    this->missionControl = setMissionControl;

    this->communicating = false;

}
/**
 * @brief Construct a new Star Link Satellite:: Star Link Satellite object
 * @author Derived  
 * @param setName 
 */
StarLinkSatellite::StarLinkSatellite(string setName){

    this->name = setName;

}
/**
 * @brief Clones the current StarLinkStatellite object
 * @author Derived 
 * @return StarLinkSatellite* 
 */
StarLinkSatellite *StarLinkSatellite::clone() {

    return new StarLinkSatellite(this->name);
}
/**
 * @brief sets the name of the current object.
 * @author Derived  
 * @param name 
 */
void StarLinkSatellite::setName(string name) {

    this->name = name;

}
/**
 * @brief Updates the communicating and missionControl memembers.
 * @author Derived
 */
void StarLinkSatellite::update()
{   
    this->communicating = this->missionControl->hasConnected();

    if (this->communicating == false) {

        this->missionControl->setConnection(this->communicating);
    
    } else {

        this->missionControl->setConnection(this->communicating);
    }
    
}
/**
 * @brief prints the communication status of the current object.
 * @author Derived 
 * 
 */
void StarLinkSatellite::print()
{
    if (this->communicating == false) {

        cout << Colours::red("Not Connected: There is no communication between GroundMissionControl and Satellites") << endl;
    
    } else {

        cout << Colours::green("Connected: There is communication between GroundMissionConctrol and Satellites") << endl;
    }
}
/**
 * @brief Destroy the Star Link Satellite:: Star Link Satellite object
 * @author Derived 
 */
StarLinkSatellite::~StarLinkSatellite(){

    delete this->missionControl;

    this->missionControl = nullptr;
}