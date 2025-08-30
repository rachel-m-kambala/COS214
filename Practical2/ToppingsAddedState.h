#ifndef TOPPINGSADDEDSTATE_H
#define TOPPINGSADDEDSTATE_H

#include "PizzaState.h"
#include "Pizza.h"

class ToppingsAddedState : public PizzaState {
public:
    void next(Pizza* pizza);
    void previous(Pizza* pizza);
    std::string getName() { return "Toppings Added"; }
};

#endif
