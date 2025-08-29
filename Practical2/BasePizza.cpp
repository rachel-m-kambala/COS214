//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "BasePizza.h"
#include <iostream>

BasePizza::BasePizza(PizzaComponent* t)
    : toppings(t) {}

BasePizza::~BasePizza() {
    delete toppings;
}

double BasePizza::getPrice() {
    return toppings->getPrice();
}

std::string BasePizza::getName() {
    return toppings->getName();
}

void BasePizza::printPizza() {
    std::cout << getName() << " - Price: $" << getPrice() << "\n";
}
