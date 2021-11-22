#include "FHCaretaker.h"


HPCaretaker::HPCaretaker(){
    this->backup = nullptr;
}
FalconHeavyPropulsionMemento * HPCaretaker:: getBackup(){
    return this->backup;
}
void HPCaretaker::setBackup(FalconHeavyPropulsionMemento* backup){
    this->backup = backup;
}