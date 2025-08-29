//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "PizzaDecorator.h"

PizzaDecorator::PizzaDecorator(Pizza* p, double cost)
    : pizza(p), extraPrice(cost) {}

PizzaDecorator::~PizzaDecorator() {
    delete pizza;
}

double PizzaDecorator::getPrice() {
    return pizza->getPrice() + extraPrice;
}


std::string PizzaDecorator::getName() {
    return pizza->getName();
}
