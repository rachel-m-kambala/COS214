#include "InOvenState.h"
#include "ReadyForCollectionState.h"
#include "ToppingsAddedState.h"

void InOvenState::next(Pizza* pizza) {
    pizza->setState(new ReadyForCollectionState());
}

void InOvenState::previous(Pizza* pizza) {
    pizza->setState(new ToppingsAddedState());
}
