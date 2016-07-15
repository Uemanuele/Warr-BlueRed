//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef ES6_07_07_16_HOLDBREATH_H
#define ES6_07_07_16_HOLDBREATH_H

#include "Physicalfeature.h"
#include <iostream>

class HoldBreath : public Physicalfeature{
public:
    HoldBreath(int hb=10):Physicalfeature(hb){ }
    virtual void setMode() override {
        std::cout<<"HoldBreath"<<std::endl;
    }
};


#endif //ES6_07_07_16_HOLDBREATH_H
