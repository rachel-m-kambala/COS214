//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "BasePizza.h"
#include <iostream>
using namespace std;

BasePizza::BasePizza(PizzaComponent* pc) : pizzaComponent(pc) {}

BasePizza::~BasePizza() {
    delete pizzaComponent; // cleanup composite toppings
}

double BasePizza::getPrice() {
    return pizzaComponent->getPrice(); // delegate to composite
}

string BasePizza::getName() {
    return pizzaComponent->getName();  // delegate to composite
}

void BasePizza::printPizza() {
    cout << getName() << " -> Price: " << getPrice() << endl;
}
