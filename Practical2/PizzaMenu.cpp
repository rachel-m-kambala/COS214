//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

// #include "PizzaMenu.h"

// void PizzaMenu::notifyObservers(std::string message) {
//     for (Observer* observer : observers) {
//         observer->update("[-----Pizza Menu Update-----]:\n" + message);
//     }
// }

#include "PizzaMenu.h"
#include <iostream>

PizzaMenu::PizzaMenu(){}
PizzaMenu::~PizzaMenu(){}

void PizzaMenu::notifyObservers(std::string message) {
    for (Observer* obs : observers) {
        obs->update("[PizzaMenu] " + message);
    }
}
