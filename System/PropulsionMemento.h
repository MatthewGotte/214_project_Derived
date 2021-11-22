#ifndef PROPULSIONMEMENTO_H
#define PROPULSIONMEMENTO_H

#include <iostream>
#include "Falcon9Core.h"
#include "Payload.h"

class PropulsionMemento{
    private:
        Falcon9Core * core ;
        Payload * payload;
    public:
        PropulsionMemento(Falcon9Core * , Payload * );
        Falcon9Core * getCore();
        Payload * getPay();

};
#endif