//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "StuffedCrust.h"

StuffedCrust::StuffedCrust(Pizza* p, double cost)
    : PizzaDecorator(p, cost) {}

StuffedCrust::~StuffedCrust() {}

double StuffedCrust::getPrice() {
    return PizzaDecorator::getPrice();
}

std::string StuffedCrust::getName() {
    return PizzaDecorator::getName() + " + Stuffed Crust";
}

void StuffedCrust::printPizza() {
    std::cout << getName() << " - Price: R" << getPrice() << "\n";
}
