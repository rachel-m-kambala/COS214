//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef REGULARPRICE_H
#define REGULARPRICE_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "DiscountStrategy.h"

class RegularPrice : public DiscountStrategy{
    public:
        double applyDiscount(double price, int quantity);
}

#endif