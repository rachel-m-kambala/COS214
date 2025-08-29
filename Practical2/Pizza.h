#ifndef PIZZA_H
#define PIZZA_H

#include <string>

class Pizza {
public:
    virtual ~Pizza() {}
    virtual double getPrice() = 0;
    virtual std::string getName() = 0;
    virtual void printPizza() = 0;
};

#endif
