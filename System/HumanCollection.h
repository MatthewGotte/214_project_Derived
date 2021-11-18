
#ifndef __HumanCollection_h__
#define __HumanCollection_h__
class Human;
class HumanIterator;

// class Collection;
class HumanCollection;

class HumanCollection{
public:
    HumanCollection();
    virtual HumanIterator* createHumanIterator()=0;
    virtual void addHuman(Human*)=0;
    virtual void removeHuman(Human*)=0;
    virtual bool isEmpty()=0;
    virtual ~HumanCollection();
};

#endif
