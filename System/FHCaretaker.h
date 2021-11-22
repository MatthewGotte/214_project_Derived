#ifndef FHCARETAKER_H
#define FHCARETAKER_H


#include "FalconHeavyPropulsionMemento.h"

class HPCaretaker{
    private:
        FalconHeavyPropulsionMemento * backup;
    public:
        HPCaretaker();
        FalconHeavyPropulsionMemento * getBackup();
        void setBackup(FalconHeavyPropulsionMemento* );
};
#endif