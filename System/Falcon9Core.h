
#ifndef __Falcon9Core_h__
#define __Falcon9Core_h__

#include "Core.h"
#include "MerlinEngine.h"
#include <vector>
#include <iostream>
using namespace std;

class Falcon9Core: public Core {
private:
    string name;
    vector< MerlinEngine* > coreEngines;
public:
    Falcon9Core(string name);
    ~Falcon9Core();
};

#endif
 