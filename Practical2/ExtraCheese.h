//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef EXTRACHEESE_H
#define EXTRACHEESE_H

#include "PizzaDecorator.h"
#include <iostream>
#include <string>

class ExtraCheese : public PizzaDecorator {
public:
    ExtraCheese(Pizza* p, double cost = 2.0);
    ~ExtraCheese();

    double getPrice() override;
    std::string getName() override;
    void printPizza() override;
};

#endif
