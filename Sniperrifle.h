//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef ES6_07_07_16_SNIPERRIFLE_H
#define ES6_07_07_16_SNIPERRIFLE_H


#include "Weapon.h"
#include <iostream>
#include <random>

class Sniperrifle : public Weapon{
public:
    Sniperrifle(int p=5):Weapon(p){ }
    virtual void doShoot() override {
        std::cout<<"SniperRifle"<<std::endl;
    }
    virtual void calcPrec() override {
        prec = rand() % 10;
    }
};


#endif //ES6_07_07_16_SNIPERRIFLE_H
