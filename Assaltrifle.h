//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef WARR_BLUERED_ASSALTRIFLE_H
#define WARR_BLUERED_ASSALTRIFLE_H

#include "Weapon.h"
#include <iostream>
#include <stdlib.h>

class Assaltrifle : public Weapon{
public:
    Assaltrifle(int a=5):Weapon(a){}

    virtual void doShoot() override {
        std::cout<<"AssaltRifle"<<" precision: "<<prec<<std::endl;
    }
    virtual void calcPrec() override {
        prec = rand() % 10;
    }
};

#endif //WARR_BLUERED_ASSALTRIFLE_H