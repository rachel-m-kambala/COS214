//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include "PizzaComponent.h"
using namespace std;

class Pizza {
public:
    virtual ~Pizza() {}
    virtual double getPrice() = 0;
    virtual string getName() = 0;
    virtual void printPizza() = 0;
};

#endif
