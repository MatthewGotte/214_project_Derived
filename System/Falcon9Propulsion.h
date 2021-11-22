#ifndef DERIVED_FALCON9PROPULSION_H
#define DERIVED_FALCON9PROPULSION_H

#include "Payload.h"
#include "Propulsion.h"
#include "PropulsionMemento.h"
#include "Falcon9Core.h"

class Falcon9Propulsion : public Propulsion 
{
    private:

        Falcon9Core * core1;
        Payload * payload;

    public:

        /**
         * @brief Construct a new Falcon 9 Propulsion object
         * @author Derived 
         * @param p 
         */
        Falcon9Propulsion(Payload * p);

        /**
         * @brief Destroy the Falcon 9 Propulsion object
         * @author Derived 
         */
        ~Falcon9Propulsion();

        /**
         * @brief Backup the Falcon 9 Propulsion object
         * @author Derived 
         * @return PropulsionMemento* 
         */
        PropulsionMemento* backup ();

        /**
         * @brief Restore from Falcon 9 Propulsion object Backup
         * @author Derived 
         */
        void restore(PropulsionMemento * );

        /**
         * @brief Land Falcon 9 Propulsion object
         * @author Derived 
         */
        void land();

        /**
         * @brief Launch Falcon 9 Propulsion object
         * @author Derived 
         */
        void launch();
};

#endif //DERIVED_FALCON9PROPULSION_H