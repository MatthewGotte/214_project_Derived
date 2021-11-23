#ifndef PROPCARETAKER_H
#define PROPCARETAKER_H

#include "PropulsionMemento.h"

class PropCaretaker
{
    private:

        PropulsionMemento * backup;

    public:

        /**
         * @brief Construct a new Prop Caretaker object
         * @author Derived
         */
        PropCaretaker();

        /**
         * @brief Get the Backup of the PropulsionMemento
         * @author Derived
         * @return PropulsionMemento* 
         */
        PropulsionMemento * getBackup();

        /**
         * @brief Set the Backup of the PropulsionMemento
         * @author Derived
         */
        void setBackup(PropulsionMemento* );
};
#endif