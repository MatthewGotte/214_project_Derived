#ifndef __MerlinEngine_h__
#define __MerlinEngine_h__

#include <iostream>
#include "Engine.h"

class MerlinEngine: public Engine
{
private:
    string name;
public:
    MerlinEngine(string name);
    MerlinEngine * clone();
    ~MerlinEngine();
};

#endif
