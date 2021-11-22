#include "FalconHeavyPropulsionMemento.h"

FalconHeavyPropulsionMemento::FalconHeavyPropulsionMemento(Falcon9Core * core1 , Falcon9Core * core2  , Falcon9Core * core3 , Payload * pay){
    this->payload = pay;
    this->core1 = core1;
    this->core2 = core2;
    this->core3 = core3;

}
Falcon9Core * FalconHeavyPropulsionMemento:: getCore1(){
    return this->core1;

}
Falcon9Core * FalconHeavyPropulsionMemento:: getCore2(){
    return this->core2;

}
Falcon9Core * FalconHeavyPropulsionMemento:: getCore3(){
    return this->core3;

}
Payload *FalconHeavyPropulsionMemento:: getPay(){
    return this->payload;

}