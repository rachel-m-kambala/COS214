//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "ToppingGroup.h"

ToppingGroup::ToppingGroup(const std::string& name)
    : groupName(name) {}

ToppingGroup::~ToppingGroup() {
    for (auto c : components) {
        delete c;
    }
}

void ToppingGroup::add(PizzaComponent* component) {
    components.push_back(component);
}

double ToppingGroup::getPrice() {
    double total = 0.0;
    for (auto c : components) {
        total += c->getPrice();
    }
    return total;
}

std::string ToppingGroup::getName() {
    std::string name = groupName + " (";
    for (size_t i = 0; i < components.size(); ++i) {
        name += components[i]->getName();
        if (i != components.size() - 1) name += ", ";
    }
    name += ")";
    return name;
}
