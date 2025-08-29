#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include "DiscountStrategy.h"
#include "Observer.h"

class Pizza {
public:
    Pizza(std::string name, double basePrice);
    Pizza() {}
    virtual ~Pizza() {}
    virtual double getPrice();
    virtual std::string getName();
    virtual void printPizza() = 0;
    double getFinalPrice();
    void setStrategy(DiscountStrategy* strategy);
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers(std::string message);

protected:
    std::string name;
    double basePrice;
    DiscountStrategy* strategy;
    std::vector<Observer*> observers;
};

#endif
