//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "Menus.h"

void Menus::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void Menus::removeObserver(Observer* observer) {
    for (auto it = observers.begin(); it != observers.end(); ++it) {
        if (*it == observer) {
            observers.erase(it);
            break; 
        }
    }
}

void Menus::addPizza(Pizza* pizza) {
    pizzas.push_back(pizza);
    notifyObservers("New pizza added: " + pizza->getName());
}

void Menus::removePizza(Pizza* pizza) {
    for (auto it = pizzas.begin(); it != pizzas.end(); ++it) {
        if (*it == pizza) {
            pizzas.erase(it);
            break;
        }
    }
    notifyObservers("Pizza removed: " + pizza->getName());
}