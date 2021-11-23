#include "Colours.h"
#include "StarLinkSatellite.h"

StarLinkSatellite::StarLinkSatellite(ConcreteGroundMissionControl* setMissionControl) {
    this->missionControl = setMissionControl;
    this->communicating = false;
    this->setName("StarLink Satellite");
}

StarLinkSatellite::StarLinkSatellite(string setName) {
    this->name = setName;
}

StarLinkSatellite *StarLinkSatellite::clone() {
    return new StarLinkSatellite(this->name);
}

void StarLinkSatellite::setName(string name) {
    this->name = name;
}

void StarLinkSatellite::update() {   
    this->communicating = this->missionControl->hasConnected();

    if (this->communicating == false) {

        this->missionControl->setConnection(this->communicating);
    
    } else {

        this->missionControl->setConnection(this->communicating);
    }
    
}

void StarLinkSatellite::print() {
    if (this->communicating == false) {
        cout << Colours::red("Not Connected: There is no communication between GroundMissionControl and Satellites") << endl;
    } else {
        cout << Colours::green("Connected: There is communication between GroundMissionConctrol and Satellites") << endl;
    }
}

StarLinkSatellite::~StarLinkSatellite() {
    // delete this->missionControl;
    // this->missionControl = nullptr;
}


string StarLinkSatellite::getConnection() {
    return this->connection;
}

void StarLinkSatellite::setConnection(string setConnection) {
    this->connection = setConnection;
}