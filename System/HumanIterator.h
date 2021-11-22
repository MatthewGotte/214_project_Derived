#ifndef __HumanIterator_h__
#define __HumanIterator_h__

#include "HumanCollection.h"

class Human;
// class Iterator;
class HumanIterator;

class HumanIterator
{
public:
    HumanIterator();
    virtual Human* first()=0;
    virtual Human* next()=0;
    virtual bool hasNext()=0;
    virtual Human* current()=0;
    virtual ~HumanIterator();
};

#endif
