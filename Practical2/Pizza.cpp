//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "Pizza.h"

Pizza::Pizza(std::string name, double basePrice) : name(name), basePrice(basePrice), strategy(nullptr) {}

double Pizza::getPrice() {
    if (strategy) {
        return strategy->applyDiscount(basePrice);
    }
    return basePrice;
}

std::string Pizza::getName() {
    return name;
}

double Pizza::getFinalPrice() {
    if (strategy) {
        return strategy->applyDiscount(basePrice);
    }
    return basePrice;
}

void Pizza::setStrategy(DiscountStrategy* strategy) {
    this->strategy = strategy;
    notifyObservers("Discount added to " + name + "'s order.");
}

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