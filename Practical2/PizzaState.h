#ifndef PIZZASTATE_H
#define PIZZASTATE_H

#include <string>
class Pizza;

class PizzaState {
public:
    virtual ~PizzaState() {}
    virtual void next(Pizza* pizza) = 0;
    virtual void previous(Pizza* pizza) = 0;
    virtual std::string getName() = 0;
};

#endif
