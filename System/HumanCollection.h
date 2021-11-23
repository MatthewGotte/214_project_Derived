#ifndef __HumanCollection_h__
#define __HumanCollection_h__

class Human;
class HumanIterator;
class HumanCollection;

class HumanCollection
{
    public:

        /**
         * @brief Construct a new Human Collection object
         * @author Derived
         */
        HumanCollection();

        /**
         * @brief Create a Human Iterator object
         * @author Derived
         * @return HumanIterator* 
         */
        virtual HumanIterator* createHumanIterator()=0;

        /**
         * @brief Add a Human to the Human Collection 
         * @author Derived
         */
        virtual void addHuman(Human*)=0;

        /**
         * @brief Remove a Human from the Human Collection 
         * @author Derived
         */
        virtual void removeHuman(Human*)=0;

        /**
         * @brief Check if the Human Collection object is empty
         * @author Derived
         * @return true 
         * @return false 
         */
        virtual bool isEmpty()=0;

        /**
         * @brief Destroy the Human Collection object
         * @author Derived
         */
        virtual ~HumanCollection();

};

#endif
