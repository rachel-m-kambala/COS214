//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "ExtraCheese.h"

ExtraCheese::ExtraCheese(Pizza* p, double cost)
    : PizzaDecorator(p), extraPrice(cost) {}

double ExtraCheese::getPrice() {
    return pizza->getPrice() + extraPrice;
}

std::string ExtraCheese::getName() {
    return pizza->getName() + " + Extra Cheese";
}
