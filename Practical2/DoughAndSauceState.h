#ifndef DOUGHANDSAUCESTATE_H
#define DOUGHANDSAUCESTATE_H

#include "PizzaState.h"
#include <string>
#include <iostream>

class DoughAndSauceState : public PizzaState {
public:
    DoughAndSauceState();           
    std::string getName() override;   
    void next(Pizza* pizza) override; 
    void previous(Pizza* pizza) override; 
};

#endif
