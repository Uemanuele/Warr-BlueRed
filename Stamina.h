//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef ES6_07_07_16_STAMINA_H
#define ES6_07_07_16_STAMINA_H


#include "Physicalfeature.h"
#include <iostream>

class Stamina : public Physicalfeature{
public:
    Stamina(int s=10):Physicalfeature(s){ }
    virtual void setMode() override {
        std::cout<<"Stamina"<<std::endl;
    }
};


#endif //ES6_07_07_16_STAMINA_H
