#include "DoughAndSauceState.h"
#include "Pizza.h"
#include "ToppingsAddedState.h"

DoughAndSauceState::DoughAndSauceState() {}

std::string DoughAndSauceState::getName() {
    return "Dough and Sauce Prepared";
}

void DoughAndSauceState::next(Pizza* pizza) {
    pizza->setState(new ToppingsAddedState());
}

void DoughAndSauceState::previous(Pizza* pizza) {
    std::cout << "Already at first step.\n";
}
