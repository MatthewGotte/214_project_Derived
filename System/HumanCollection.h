
#ifndef __HumanCollection_h__
#define __HumanCollection_h__
class Human;
class HumanIterator;

// class Collection;
class HumanCollection;

class HumanCollection{

    /**
     * @brief Construct a new Human Collection object
     * 
     */
    HumanCollection();

    /**
     * @brief Create a Human Iterator object
     * 
     * @return HumanIterator* 
     */
    virtual HumanIterator* createHumanIterator()=0;

    /**
     * @brief Add a human into the list
     * 
     * @param Human*
     */
    virtual void addHuman(Human*)=0;

    /**
     * @brief Remove a human from the list
     * 
     */
    virtual void removeHuman(Human*)=0;

    /**
     * @brief check whether the list is empty or not
     * 
     * @return true 
     * @return false 
     */
    virtual bool isEmpty()=0;

    /**
     * @brief Destroy the Human Collection object
     * 
     */
    virtual ~HumanCollection();
};

#endif
