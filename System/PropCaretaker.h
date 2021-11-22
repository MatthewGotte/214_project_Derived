#ifndef PROPCARETAKER_H
#define PROPCARETAKER_H


#include "PropulsionMemento.h"

class PropCaretaker{
    private:
        PropulsionMemento * backup;
    public:
        PropCaretaker();
        PropulsionMemento * getBackup();
        void setBackup(PropulsionMemento* );
};
#endif