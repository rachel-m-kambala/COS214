//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef EXTRACHEESE_H
#define EXTRACHEESE_H

#include "PizzaDecorator.h"
#include <string>

class ExtraCheese : public PizzaDecorator {
private:
    double extraPrice;

public:
    ExtraCheese(Pizza* p, double cost);
    double getPrice() override;
    std::string getName() override;
};

#endif

