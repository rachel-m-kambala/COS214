//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "StuffedCrust.h"
#include <iostream>
using namespace std;

StuffedCrust::StuffedCrust(Pizza* p, double cost)
    : PizzaDecorator(p), extraPrice(cost) {}

StuffedCrust::~StuffedCrust() {}

double StuffedCrust::getPrice() {
    return pizza->getPrice() + extraPrice;
}

string StuffedCrust::getName() {
    return pizza->getName() + " + Stuffed Crust";
}

void StuffedCrust::printPizza() {
    cout << getName() << " -> Price: " << getPrice() << endl;
}
