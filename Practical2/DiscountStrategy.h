//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "Pizza.h"

//Implement!

class DiscountStrategy {
    public:
        virtual double applyDiscount(double price, int quantity) = 0; //pure virtual function
        virtual ~DiscountStrategy() {}
};

#endif