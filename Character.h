//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef WARR_BLUERED_CHARACTER_H
#define WARR_BLUERED_CHARACTER_H

#include "Weapon.h"
#include "Physicalfeature.h"

class Character {
public:
    virtual void setPhisicalFeature(Physicalfeature* aPF) =0;
    virtual void setWeapon(Weapon* aW) =0;
    virtual Physicalfeature* getPhysicalFeature() =0;
    virtual Weapon* getWeapon() =0;
    virtual void Do() =0;
    virtual void usePhysical(){
        pf->setDose(-2);
    }

protected:
    int hp;
    Physicalfeature* pf;
    Weapon *w;
    char x;
    int y;
};


#endif //WARR_BLUERED_CHARACTER_H