//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H

#include "Pizza.h"

// Base class for all decorators
class PizzaDecorator : public Pizza {
protected:
    Pizza* pizza;  // the pizza being decorated
    double extraPrice; // optional extra price for decorator

public:
    PizzaDecorator(Pizza* p, double cost = 0.0);
    virtual ~PizzaDecorator();

    virtual double getPrice() override;
    virtual std::string get


#endif
