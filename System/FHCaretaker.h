#ifndef FHCARETAKER_H
#define FHCARETAKER_H

#include "FalconHeavyPropulsionMemento.h"

class HPCaretaker
{
    private:

        FalconHeavyPropulsionMemento * backup;

    public:
        
        /**
         * @brief Construct a new HPCaretaker object
         * @author Derived
         */
        HPCaretaker();

        /**
         * @brief Get the Backup object
         * @author Derived
         * @return FalconHeavyPropulsionMemento* 
         */
        FalconHeavyPropulsionMemento * getBackup();

        /**
         * @brief Set the Backup object
         * @author Derived
         */
        void setBackup(FalconHeavyPropulsionMemento*);

};
#endif