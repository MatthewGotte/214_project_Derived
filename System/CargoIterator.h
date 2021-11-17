
#ifndef __CargoIterator_h__
#define __CargoIterator_h__


#include "CargoCollection.h"
class Cargo;
class CargoIterator
{
public:

    /**
     * @brief Construct a new Cargo Iterator object
     * 
     */
    CargoIterator();
    
    /**
     * @brief Return the first Cargo in the list
     * 
     * @return Cargo* 
     */
    virtual Cargo* first()=0;

    /**
     * @brief Return tje next Cargo in the list
     * 
     * @return Cargo* 
     */
    virtual Cargo* next()=0;

    /**
     * @brief Check whether next Cargo is available or not
     * 
     * @return true 
     * @return false 
     */
    virtual bool hasNext()=0;

    /**
     * @brief Return current Cargo
     * 
     * @return Cargo* 
     */
    virtual Cargo* current()=0;

    /**
     * @brief Destroy the Cargo Iterator object
     * 
     */
    virtual ~CargoIterator();
};

#endif
