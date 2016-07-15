//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef WARR_BLUERED_WEAPON_H
#define WARR_BLUERED_WEAPON_H


class Weapon {
public:
    Weapon(int p):prec(p){}
    virtual void doShoot() =0;
    virtual void calcPrec() =0;
    void setPrecision(int p){ prec = p; }
    int getPrecision(){ return prec; }
protected:
    int prec;
};


#endif //WARR_BLUERED_WEAPON_H
