#include "ReadyForCollectionState.h"
#include <iostream>
#include "InOvenState.h"

void ReadyForCollectionState::next(Pizza* pizza) {
    std::cout << "Pizza is already ready to collect.\n";
}

void ReadyForCollectionState::previous(Pizza* pizza) {
    pizza->setState(new InOvenState());
}
