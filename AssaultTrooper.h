//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef ES6_07_07_16_ASSAULTTROOPER_H
#define ES6_07_07_16_ASSAULTTROOPER_H

#include "Character.h"
#include "Stamina.h"
#include "Assaltrifle.h"
#include <iostream>

class AssaultTrooper : public Character{
public:
    virtual Physicalfeature* getPhysicalFeature(){
        return new Stamina();
    }
    virtual Weapon* getWeapon(){
        return new Assaltrifle();
    }
    virtual void setPhisicalFeature(Physicalfeature* aPF) override {
        pf = aPF;
    }

    virtual void setWeapon(Weapon* aW){
        w = aW;
    }
    virtual void Do() override {
        doAssoult();
    }
    virtual void doAssoult() {
        pf->setMode();
        w->calcPrec();
        w->doShoot();
        doRun();
    }
    virtual void doRun() {
        pf->setDose(-2);
        std::cout<<"Flee Away"<<std::endl;
    }
};


#endif //ES6_07_07_16_ASSAULTTROOPER_H
