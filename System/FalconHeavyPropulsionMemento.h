#ifndef FALCONHEAVYPROPULSIONMEMENTO_H
#define FALCONHEAVYPROPULSIONMEMENTO_H

#include <iostream>
#include "Payload.h"
#include "Falcon9Core.h"

class FalconHeavyPropulsionMemento
{
    private:

        Falcon9Core * core1;
        Falcon9Core * core2;
        Falcon9Core * core3;
        Payload * payload;

    public:

        /**
         * @brief Construct a new Falcon Heavy Propulsion Memento object
         * @author Derived
         */
        FalconHeavyPropulsionMemento(Falcon9Core * , Falcon9Core * , Falcon9Core * , Payload *);
        
        /**
         * @brief Get the Falcon Heavy Core 1 
         * @author Derived
         * @return Falcon9Core* 
         */
        Falcon9Core * getCore1();
        
        /**
         * @brief Get the Falcon Heavy Core 2
         * @author Derived
         * @return Falcon9Core* 
         */
        Falcon9Core * getCore2();
        
        /**
         * @brief Get the Falcon Heavy Core 3
         * @author Derived
         * @return Falcon9Core* 
         */
        Falcon9Core * getCore3();
        
        /**
         * @brief Get the Payload object
         * @author Derived
         * @return Payload* 
         */
        Payload * getPay();
};
#endif