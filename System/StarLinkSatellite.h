
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
    string name;
public:
    StarLinkSatellite(string);
    StarLinkSatellite * clone();
    string getName();
    void setName(string);
};

#endif
