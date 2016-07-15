//
// Created by emanuele.vivoli on 7/15/16.
//

#ifndef WARR_BLUERED_STAMINA_H
#define WARR_BLUERED_STAMINA_H


#include "Physicalfeature.h"
#include <iostream>

class Stamina : public Physicalfeature{
public:
    Stamina(int s=10):Physicalfeature(s){ }
};


#endif //WARR_BLUERED_STAMINA_H

