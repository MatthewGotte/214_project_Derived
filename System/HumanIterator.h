#ifndef __HumanIterator_h__
#define __HumanIterator_h__

#include "HumanCollection.h"

class Human;
class HumanIterator;

class HumanIterator
{
    public:

        /**
         * @brief Construct a new Human Iterator object
         * @author Derived
         */
        HumanIterator();

        /**
         * @brief Return the first Cargo in the Iterator
         * @author Derived
         * @return Human* 
         */
        virtual Human* first()=0;

        /**
         * @brief Return the next Cargo in the Iterator
         * @author Derived
         * @return Human* 
         */
        virtual Human* next()=0;

        /**
         * @brief Check if there is Cargo in the next Iterator
         * @author Derived
         * @return true 
         * @return false 
         */
        virtual bool hasNext()=0;

        /**
         * @brief Return the Current Cargo in the Iterator
         * @author Derived
         * @return Human* 
         */
        virtual Human* current()=0;

        /**
         * @brief Destroy the Human Iterator object
         * @author Derived
         */
        virtual ~HumanIterator();

};

#endif
