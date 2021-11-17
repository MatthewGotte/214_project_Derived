
#ifndef __CargoCollection_h__
#define __CargoCollection_h__

class Cargo;
class CargoIterator;

class CargoCollection{

public:

    /**
     * @brief Construct a new Cargo Collection object
     * 
     */
    CargoCollection(){};

    /**
     * @brief Create a Cargo Iterator object
     * 
     * @return CargoIterator* 
     */
    virtual CargoIterator* createCargoIterator()=0;

    /**
     * @brief Add cargo to the list
     * 
     * @param Cargo*
     */
    virtual void addCargo(Cargo*)=0;

    /**
     * @brief Remove cargo from list
     * 
     */
    virtual void removeCargo(Cargo*)=0;

    /**
     * @brief Check whether Cargo list is empty or not
     * 
     * @return true 
     * @return false 
     */
    virtual bool isEmpty()=0;

    /**
     * @brief Destroy the Cargo Collection object
     * 
     */
    virtual ~CargoCollection(){};
};

#endif
