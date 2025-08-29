//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "ToppingGroup.h"

ToppingGroup::ToppingGroup(string n) : PizzaComponent(0.0, n) {}

ToppingGroup::~ToppingGroup() {
    for (int i = 0; i < (int)components.size(); i++) {
        delete components[i];
    }
    components.clear();
}

void ToppingGroup::add(PizzaComponent* component) {
    components.push_back(component);
}

string ToppingGroup::getName() {
    string result = name + " (";
    for (int i = 0; i < (int)components.size(); i++) {
        result += components[i]->getName();
        if (i < (int)components.size() - 1) {
            result += ", ";
        }
    }
    result += ")";
    return result;
}

double ToppingGroup::getPrice() {
    double total = 0.0;
    for (int i = 0; i < (int)components.size(); i++) {
        total += components[i]->getPrice();
    }
    return total;
}
