//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H

class DiscountStrategy {
public:
    virtual ~DiscountStrategy() {}
   virtual double applyDiscount(double price, int quantity) = 0;

};

#endif
