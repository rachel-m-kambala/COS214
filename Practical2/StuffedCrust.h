//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef STUFFEDCRUST_H
#define STUFFEDCRUST_H

#include "PizzaDecorator.h"
#include <iostream>
#include <string>

class StuffedCrust : public PizzaDecorator {
public:
    StuffedCrust(Pizza* p, double cost = 3.5) : PizzaDecorator(p, cost) {}
    ~StuffedCrust() {}

    double getPrice() override { return PizzaDecorator::getPrice(); }
    std::string getName() override { return PizzaDecorator::getName() + " + Stuffed Crust"; }
    void printPizza() override { std::cout << getName() << " - Price: $" << getPrice() << "\n"; }
};

#endif
