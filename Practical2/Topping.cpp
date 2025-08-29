//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "Topping.h"

Topping::Topping(double p, const std::string& n)
    : price(p), name(n) {}

double Topping::getPrice() {
    return price;
}

std::string Topping::getName() {
    return name;
}
