#ifndef READYFORCOLLECTIONSTATE_H
#define READYFORCOLLECTIONSTATE_H

#include "PizzaState.h"
#include "Pizza.h"

class ReadyForCollectionState : public PizzaState {
public:
    void next(Pizza* pizza);
    void previous(Pizza* pizza);
    std::string getName() { return "Ready for Collection"; }
};

#endif
