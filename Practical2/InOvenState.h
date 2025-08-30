#ifndef INOVENSTATE_H
#define INOVENSTATE_H

#include "PizzaState.h"
#include "Pizza.h"

class InOvenState : public PizzaState {
public:
    void next(Pizza* pizza);
    void previous(Pizza* pizza);
    std::string getName() { return "In Oven"; }
};

#endif
