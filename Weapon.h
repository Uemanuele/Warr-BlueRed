//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef ES6_07_07_16_WEAPON_H
#define ES6_07_07_16_WEAPON_H


class Weapon {
public:
    Weapon(int p):prec(p){}
    virtual void doShoot() =0;
    virtual void calcPrec() =0;
    void setPrecision(int p){
        prec = p;
    }
    int getPrecision(){
        return prec;
    }

protected:
    int prec;
};


#endif //ES6_07_07_16_WEAPON_H
