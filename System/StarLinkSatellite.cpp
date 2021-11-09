
#include "StarLinkSatellite.h"

StarLinkSatellite::StarLinkSatellite(string name){
    this->name = name;
}
StarLinkSatellite *StarLinkSatellite::clone() {
    return new StarLinkSatellite(this->name);
}

void StarLinkSatellite::setName(string name) {
    this->name = name;

}
