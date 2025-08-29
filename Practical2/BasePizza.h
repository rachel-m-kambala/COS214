//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef BASEPIZZA_H
#define BASEPIZZA_H

#include "Pizza.h"
#include "PizzaComponent.h"

class BasePizza : public Pizza {
private:
    PizzaComponent* pizzaComponent;  // <-- Composite (toppings)

public:
    BasePizza(PizzaComponent* pc);
    ~BasePizza();

    double getPrice();
    string getName();
    void printPizza();
};

#endif
