//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef WARR_BLUERED_SNIPERRIFLE_H
#define WARR_BLUERED_SNIPERRIFLE_H


#include "Weapon.h"
#include <iostream>
#include <random>

class Sniperrifle : public Weapon{
public:
    Sniperrifle(int p=5):Weapon(p){ }

    virtual void doShoot() override {
        std::cout<<"SniperRifle"<<" precision: "<<prec<<std::endl;
    }
    virtual void calcPrec() override {
        prec = rand() % 10;
    }
};


#endif //WARR_BLUERED_SNIPERRIFLE_H
