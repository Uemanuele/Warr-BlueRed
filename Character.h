//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef ES6_07_07_16_CHARACTER_H
#define ES6_07_07_16_CHARACTER_H

#include "Weapon.h"
#include "Physicalfeature.h"

class Character {
public:
    virtual void setPhisicalFeature(Physicalfeature* aPF) =0;
    virtual void setWeapon(Weapon* aW) =0;
    virtual Physicalfeature* getPhysicalFeature() =0;
    virtual Weapon* getWeapon() =0;
    virtual void Do() =0;

protected:
    int hp;
    Physicalfeature* pf;
    Weapon *w;
};


#endif //ES6_07_07_16_CHARACTER_H
