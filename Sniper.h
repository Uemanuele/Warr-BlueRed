//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef WARR_BLUERED_SNIPER_H
#define WARR_BLUERED_SNIPER_H


#include "Character.h"
#include "HoldBreath.h"
#include "Sniperrifle.h"
#include <iostream>

class Sniper : public Character{
public:
    virtual Physicalfeature* getPhysicalFeature(){ return new HoldBreath(); }
    virtual Weapon* getWeapon(){ return new Sniperrifle(); }

    virtual void setPhisicalFeature(Physicalfeature* aPF) override { pf = aPF; }
    virtual void setWeapon(Weapon* aW){ w = aW; }

    virtual void Do() override {
        std::cout<<"*** SNIPE ***"<<std::endl;
        doSniper();
    }

private:
    virtual void doSniper() {
        usePhysical();
        writePhysical();
        w->calcPrec();
        w->doShoot();
        doSnipe();
    }
    void writePhysical(){
        std::cout<<"HoldBreath dose: "<<pf->getDose()<<std::endl;
    }
    virtual void doSnipe() {
        pf->setDose(-2);
        std::cout<<"Snipe"<<std::endl;
    }


};


#endif //WARR_BLUERED_SNIPER_H
