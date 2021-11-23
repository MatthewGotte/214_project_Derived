#ifndef __CargoIterator_h__
#define __CargoIterator_h__

#include "CargoCollection.h"

class Cargo;

class CargoIterator
{
    public:

        /**
         * @brief Construct a new  default Cargo Iterator object
         * @author Derived
         */
        CargoIterator()=default;

        /**
         * @brief Return the first Cargo in the Iterator
         * @author Derived
         * @return Cargo* 
         */
        virtual Cargo* first()=0;

        /**
         * @brief Return the next Cargo in the Iterator
         * @author Derived
         * @return Cargo* 
         */
        virtual Cargo* next()=0;

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
         * @return Cargo* 
         */
        virtual Cargo* current()=0;

        /**
         * @brief Destroy the Cargo Iterator object
         * @author Derived
         */
        virtual ~CargoIterator()=default;

};

#endif
