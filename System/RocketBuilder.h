//
// Created by muzin on 2021/11/09.
//

#ifndef DERIVED_ROCKETBUILDER_H
#define DERIVED_ROCKETBUILDER_H


class RocketBuilder {
private:

public:
    RocketBuilder() {

    };
    virtual ~RocketBuilder();

    //functions for ConfigurationManager->make() to call:
    virtual void reset() = 0;

    virtual void buildCore() = 0;


};


#endif //DERIVED_ROCKETBUILDER_H
