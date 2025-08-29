//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "ExtraCheese.h"
#include <iostream>
using namespace std;

ExtraCheese::ExtraCheese(Pizza* p, double cost)
    : PizzaDecorator(p), extraPrice(cost) {}

ExtraCheese::~ExtraCheese() {}

double ExtraCheese::getPrice() {
    return pizza->getPrice() + extraPrice;
}

string ExtraCheese::getName() {
    return pizza->getName() + " + Extra Cheese";
}

void ExtraCheese::printPizza() {
    cout << getName() << " -> Price: " << getPrice() << endl;
}
