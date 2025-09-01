//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef TOPPINGGROUP_H
#define TOPPINGGROUP_H

#include "PizzaComponent.h"
#include <vector>
#include <string>

class ToppingGroup : public PizzaComponent {
    std::vector<PizzaComponent*> components;
    std::string groupName;

public:
    ToppingGroup(const std::string& name);
    ToppingGroup(const ToppingGroup& other);
    ~ToppingGroup();

    void add(PizzaComponent* component);
    double getPrice() override;
    std::string getName() override;

    virtual PizzaComponent* clone() override;

};

#endif

