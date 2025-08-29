//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef STUFFEDCRUST_H
#define STUFFEDCRUST_H

#include "PizzaDecorator.h"

class StuffedCrust : public PizzaDecorator {
private:
    double extraPrice;

public:
    StuffedCrust(Pizza* p, double cost = 3.5);
    ~StuffedCrust();

    double getPrice();
    string getName();
    void printPizza();
};

#endif
