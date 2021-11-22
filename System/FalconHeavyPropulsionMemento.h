#ifndef FALCONHEAVYPROPULSIONMEMENTO_H
#define FALCONHEAVYPROPULSIONMEMENTO_H
#include "Payload.h"
#include "Falcon9Core.h"
#include <iostream>


class FalconHeavyPropulsionMemento{
    private:
        Falcon9Core * core1;
        Falcon9Core * core2;
        Falcon9Core * core3;
        Payload * payload;
    public:
         FalconHeavyPropulsionMemento(Falcon9Core * , Falcon9Core * , Falcon9Core * , Payload *);
         Falcon9Core * getCore1();
         Falcon9Core * getCore2();
         Falcon9Core * getCore3();
         Payload * getPay();
};
#endif