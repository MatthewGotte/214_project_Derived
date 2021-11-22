#include "PropCaretaker.h"


PropCaretaker::PropCaretaker(){
    this->backup = nullptr;

}
PropulsionMemento * PropCaretaker:: getBackup(){
    return this->backup;

}
void PropCaretaker:: setBackup(PropulsionMemento* backup ){
    this->backup = backup;

}