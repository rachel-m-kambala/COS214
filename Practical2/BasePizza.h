//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef BASEPIZZA_H
#define BASEPIZZA_H

#include "Pizza.h"
#include "PizzaComponent.h"

class BasePizza : public Pizza {
    PizzaComponent* toppings;

public:
    BasePizza(PizzaComponent* t);
    ~BasePizza();

    double getPrice() override;
    std::string getName() override;
    void printPizza() override;
};

#endif
