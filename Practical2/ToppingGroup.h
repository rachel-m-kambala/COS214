//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef TOPPINGGROUP_H
#define TOPPINGGROUP_H

#include "PizzaComponent.h"
#include <vector>

class ToppingGroup : public PizzaComponent {
private:
    vector<PizzaComponent*> components;

public:
    ToppingGroup(string n);
    ~ToppingGroup();

    void add(PizzaComponent* component);

    string getName();
    double getPrice();
};

#endif
