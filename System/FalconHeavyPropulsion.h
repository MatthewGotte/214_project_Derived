#ifndef DERIVED_FALCONHEAVYPROPULSION_H
#define DERIVED_FALCONHEAVYPROPULSION_H

#include "Payload.h"
#include "Propulsion.h"
#include "Falcon9Core.h"
#include "FalconHeavyPropulsionMemento.h"

class FalconHeavyPropulsion : public Propulsion 
{
    private:

        Falcon9Core * core1;
        Falcon9Core * core2;
        Falcon9Core * core3;
        Payload * payload;

    public:

        /**
         * @brief Construct a new Falcon Heavy Propulsion object
         * @author Derived
         * @param p 
         */
        FalconHeavyPropulsion(Payload * p);

        /**
         * @brief Destroy the Falcon Heavy Propulsion object
         * @author Derived
         */
        ~FalconHeavyPropulsion();

        /**
         * @brief Backup the Falcon Heavy Propulsion 
         * @author Derived
         * @return FalconHeavyPropulsionMemento* 
         */
        FalconHeavyPropulsionMemento* backup();

        /**
         * @brief Resotre the Falcon Heavy Propulsion from the Backup
         * @author Derived
         */
        void restore(FalconHeavyPropulsionMemento * );

        /**
         * @brief Land the Falcon Heavy Propulsion 
         * @author Derived
         */
        void land();

        /**
         * @brief Launch the Falcon Heavy Propulsion 
         * @author Derived
         */
        void launch();

};

#endif //DERIVED_FALCONHEAVYPROPULSION_H
