//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef TOPPING_H
#define TOPPING_H

#include "PizzaComponent.h"

class Topping : public PizzaComponent {
public:
    Topping(double p, string n) : PizzaComponent(p, n) {}

    string getName();
    double getPrice();
};

#endif