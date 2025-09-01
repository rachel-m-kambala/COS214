#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>
#include "DiscountStrategy.h"
#include "Observer.h"
#include "PizzaState.h"

class Pizza {
public:
    Pizza(const std::string& name);
    Pizza(std::string name, double basePrice);
    Pizza();

    virtual ~Pizza();

    // Decorator methods
    virtual double getPrice() = 0;
    virtual std::string getName() = 0;
    virtual void printPizza() = 0;

    // Discount Strategy
    // double getFinalPrice();
    // void setStrategy(DiscountStrategy* strategy);

    // Observer methods
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers(std::string message);

   // State methods
    void nextState();
    void previousState();
    void printState();
    void setState(PizzaState* newState);

protected:
    std::string name;
    double basePrice;
    int quantity = 1; 
    DiscountStrategy* strategy;
    std::vector<Observer*> observers;

    // State
    PizzaState* state;
};

#endif
