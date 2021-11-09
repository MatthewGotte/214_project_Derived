
#ifndef __Falcon9Core_h__
#define __Falcon9Core_h__

#include "Core.h"
class MerlinEngine;
#include <vector>
#include <iostream>
using namespace std;
class Falcon9Core;

class Falcon9Core: public Core
{
private:
    int merlinengines ;
    vector<MerlinEngine*> engines;
public:
    Falcon9Core();
    int getMerlinNumber();
    Falcon9Core* clone();
    void addEngine(MerlinEngine*);
};

#endif
