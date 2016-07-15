//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef WARR_BLUERED_ASSAULTTROOPER_H
#define WARR_BLUERED_ASSAULTTROOPER_H

#include "Character.h"
#include "Stamina.h"
#include "Assaltrifle.h"
#include <iostream>

class AssaultTrooper : public Character{
public:
    virtual Physicalfeature* getPhysicalFeature(){ return new Stamina(); }
    virtual Weapon* getWeapon(){ return new Assaltrifle(); }

    virtual void setPhisicalFeature(Physicalfeature* aPF) override { pf = aPF; }
    virtual void setWeapon(Weapon* aW){ w = aW; }

    virtual void Do() override {
        std::cout<<"*** ASSAULT TROOPER ***"<<std::endl;
        doAssoult();
    }


private:
    virtual void doAssoult() {
        usePhysical();
        writePhysical();
        w->calcPrec();
        w->doShoot();
        doRun();
    }
    void writePhysical(){
        std::cout<<"Stamina dose: "<<pf->getDose()<<std::endl;
    }
    virtual void doRun() {
        pf->setDose(-2);
        std::cout<<"Flee Away"<<std::endl;
    }
};

#endif //WARR_BLUERED_ASSAULTTROOPER_H
