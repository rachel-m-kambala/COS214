//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef TOPPING_H
#define TOPPING_H

#include "PizzaComponent.h"
#include <string>

class Topping : public PizzaComponent {
    double price;
    std::string name;

public:
    Topping(double p, const std::string& n);
    ~Topping() {}

    double getPrice() override;
    std::string getName() override;
     virtual PizzaComponent* clone();
};

#endif
