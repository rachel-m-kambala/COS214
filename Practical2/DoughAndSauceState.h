#ifndef DOUGHANDSAUCESTATE_H
#define DOUGHANDSAUCESTATE_H

#include "PizzaState.h"
#include "Pizza.h"

class DoughAndSauceState : public PizzaState {
public:
    void next(Pizza* pizza);
    void previous(Pizza* pizza);
    std::string getName() { return "Dough and Sauce Prepared"; }
};

#endif
