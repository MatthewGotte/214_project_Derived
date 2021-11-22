#ifndef __CargoCollection_h__
#define __CargoCollection_h__

class Cargo;
class CargoIterator;

class CargoCollection
{
    public:

        /**
         * @brief Construct a new default Cargo Collection object
         * @author Derived
         */
        CargoCollection() = default;

        /**
         * @brief Create a Cargo Iterator object
         * @author Derived
         * @return CargoIterator* 
         */
        virtual CargoIterator* createCargoIterator()=0;

        /**
         * @brief Adds Cargo to the Collection 
         * @author Derived
         */
        virtual void addCargo(Cargo*)=0;

        /**
         * @brief Removes Cargo from the Collection
         * @author Derived
         */
        virtual void removeCargo(Cargo*)=0;
        
        /**
         * @brief Checks in the Cargo Collection is empty
         * @author Derived
         * @return true 
         * @return false 
         */
        virtual bool isEmpty()=0;

        /**
         * @brief Destroy the Cargo Collection object
         * @author Derived
         */
        virtual ~CargoCollection()=default;

};

#endif
