//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef EXTRACHEESE_H
#define EXTRACHEESE_H

#include "PizzaDecorator.h"

class ExtraCheese : public PizzaDecorator {
private:
    double extraPrice;

public:
    ExtraCheese(Pizza* p, double cost = 2.0);
    ~ExtraCheese();

    double getPrice();
    string getName();
    void printPizza();
};

#endif
