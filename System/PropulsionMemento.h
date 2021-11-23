#ifndef PROPULSIONMEMENTO_H
#define PROPULSIONMEMENTO_H

#include <iostream>
#include "Falcon9Core.h"
#include "Payload.h"

class PropulsionMemento
{
    private:

        Falcon9Core * core ;
        Payload * payload;

    public:

        /**
         * @brief Construct a new Propulsion Memento object
         * @author Derived
         * @param core 
         * @param pay 
         */
        PropulsionMemento(Falcon9Core * core, Payload * pay);

        /**
         * @brief Get the Core 
         * @author Derived
         * @return Falcon9Core* 
         */
        Falcon9Core * getCore();

        /**
         * @brief Get the Payload 
         * @author Derived
         * @return Payload* 
         */
        Payload * getPay();

};
#endif