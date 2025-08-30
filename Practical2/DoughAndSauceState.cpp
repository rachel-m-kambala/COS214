#include "DoughAndSauceState.h"
#include "ToppingsAddedState.h"
#include <iostream>

void DoughAndSauceState::next(Pizza* pizza) {
    pizza->setState(new ToppingsAddedState());
}

void DoughAndSauceState::previous(Pizza* pizza) {
    std::cout << "Already at first step.\n";
}
