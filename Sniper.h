//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef ES6_07_07_16_SNIPER_H
#define ES6_07_07_16_SNIPER_H


#include "Character.h"
#include "HoldBreath.h"
#include "Sniperrifle.h"
#include <iostream>

class Sniper : public Character{
public:
    virtual Physicalfeature* getPhysicalFeature(){
        return new HoldBreath();
    }
    virtual Weapon* getWeapon(){
        return new Sniperrifle();
    }

    virtual void setPhisicalFeature(Physicalfeature* aPF) override {
        pf = aPF;
    }

    virtual void setWeapon(Weapon* aW){
        w = aW;
    }

    virtual void Do() override {
        doSniper();
    }

private:
    virtual void doSniper() {
        pf->setMode();
        w->calcPrec();
        w->doShoot();
        doSnipe();
    }
    virtual void doSnipe() {
        pf->setDose(-2);
        std::cout<<"Snipe"<<std::endl;
    }
};


#endif //ES6_07_07_16_SNIPER_H
