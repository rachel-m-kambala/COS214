//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "PizzaDecorator.h"

// Constructor: store pizza pointer and optional cost
PizzaDecorator::PizzaDecorator(Pizza* p, double cost)
    : pizza(p), extraPrice(cost) {}

// Destructor: delete wrapped pizza
PizzaDecorator::~PizzaDecorator() {
    delete pizza;
}

// Default implementation: just returns the wrapped pizza's price + extra
double PizzaDecorator::getPrice() {
    return pizza->getPrice() + extraPrice;
}

// Default implementation: just returns the wrapped pizza's name
std::string PizzaDecorator::getName() {
    return pizza->getName();
}
