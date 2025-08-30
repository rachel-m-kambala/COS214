#include "ToppingsAddedState.h"
#include "InOvenState.h"
#include "DoughAndSauceState.h"

void ToppingsAddedState::next(Pizza* pizza) {
    pizza->setState(new InOvenState());
}

void ToppingsAddedState::previous(Pizza* pizza) {
    pizza->setState(new DoughAndSauceState());
}
