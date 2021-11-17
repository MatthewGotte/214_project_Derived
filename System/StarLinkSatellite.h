
#ifndef __StarLinkSatellite_h__
#define __StarLinkSatellite_h__

#include "Satellite.h"
#include <iostream>
using namespace std;
// class Satellite;
class StarLinkSatellite;

class StarLinkSatellite: public Satellite
{
private:

    /**
     * @brief sets name of StarLinkSatellite
     * 
     */
    string name;

public:
    /**
     * @brief Construct a new StarLink Satellite:: Star Link Satellite object
     * 
     * @param name 
     */
    StarLinkSatellite(string);

    
    /**
     * @brief Implement an operation to create a clone of a StarLink Satellite
     * 
     * @return StarLinkSatellite* 
     */
    StarLinkSatellite * clone();
    
    /**
     * @brief Give each StarLink Satellite a name for easy identification
     * 
     * @param name 
     */
    void setName(string);

};

#endif
