//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "ExtraCheese.h"

ExtraCheese::ExtraCheese(Pizza* p, double cost)
    : PizzaDecorator(p, cost) {}

ExtraCheese::~ExtraCheese() {}

double ExtraCheese::getPrice() {
    return PizzaDecorator::getPrice();
}

std::string ExtraCheese::getName() {
    return PizzaDecorator::getName() + " + Extra Cheese";
}

void ExtraCheese::printPizza() {
    std::cout << getName() << " - Price: $" << getPrice() << "\n";
}
