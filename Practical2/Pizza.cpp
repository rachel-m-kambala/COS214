//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "Pizza.h"

Pizza::Pizza(std::string name, double basePrice) : name(name), basePrice(basePrice), strategy(NULL) {}

double Pizza::getPrice() {
    if (strategy) {
        return strategy->applyDiscount(basePrice, 1);
    }
    return basePrice;
}

//Get Price is needs to be virtual for the decorate uu change the decorator 

// double Pizza::getPrice() {
//     if (strategy) {
//         return strategy->applyDiscount(basePrice);
//     }
//     return basePrice;
// }

std::string Pizza::getName() {
    return name;
}

double Pizza::getFinalPrice() {
    if (strategy) {
        return strategy->applyDiscount(basePrice, 1);
    }
    return basePrice;
}

// double Pizza::getFinalPrice() {
//     if (strategy) {
//         return strategy->applyDiscount(basePrice);
//     }
//     return basePrice;
// }

// void Pizza::setStrategy(DiscountStrategy* strategy) {
//     this->strategy = strategy;
//     notifyObservers("Discount added to " + name + "'s order.");
// }

void Pizza::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void Pizza::removeObserver(Observer* observer) {
    for (auto it = observers.begin(); it != observers.end(); ++it) {
        if (*it == observer) {
            observers.erase(it);
            break; 
        }
    }
}

void Pizza::notifyObservers(std::string message) {
    for (Observer* observer : observers) {
        observer->update(message);
    }
}

// // Jerusha -State methods
// void Pizza::nextState() {
//     if(state) state->next(this);
// }
// void Pizza::previousState() {
//     if(state) state->previous(this);
// }
// void Pizza::printState() {
//     if(state) std::cout << "Current State: " << state->getName() << std::endl;
// }
// void Pizza::setState(PizzaState* newState) {
//     if(state) delete state;
//     state = newState;
// }