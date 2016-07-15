//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef WARR_BLUERED_PHYSICALFICTURE_H
#define WARR_BLUERED_PHYSICALFICTURE_H


class Physicalfeature {
public:
    Physicalfeature(int d=10):dose(d){ }
    void setDose(int d){ dose += d; }
    int getDose(){ return dose; }

protected:
    int dose;
};


#endif //WARR_BLUERED_PHYSICALFICTURE_H