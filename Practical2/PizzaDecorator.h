#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H

#include "Pizza.h"

class PizzaDecorator : public Pizza {
protected:
    Pizza* pizza;
    double extraPrice;

public:
    PizzaDecorator(Pizza* p, double cost = 0.0);
    virtual ~PizzaDecorator();

    virtual double getPrice() override;
    virtual std::string getName() override;
};

#endif
