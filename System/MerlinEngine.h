
#ifndef __MerlinEngine_h__
#define __MerlinEngine_h__

#include "Engine.h"
#include <iostream>

class MerlinEngine: public Engine
{
private:
    string name;
public:
    MerlinEngine(string name);
    ~MerlinEngine();
};

#endif
