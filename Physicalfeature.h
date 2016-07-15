//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef ES6_07_07_16_PHYSICALFICTURE_H
#define ES6_07_07_16_PHYSICALFICTURE_H


class Physicalfeature {
public:
    Physicalfeature(int d=10):dose(d){ }
    virtual void setMode() =0;
    void setDose(int d){
        dose += d;
    }
    int getDose(){
        return dose;
    }

protected:
    int dose;
};


#endif //ES6_07_07_16_PHYSICALFICTURE_H
