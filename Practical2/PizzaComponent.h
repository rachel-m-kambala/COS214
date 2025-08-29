//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef PIZZACOMPONENT_H
#define PIZZACOMPONENT_H

#include <string>
using namespace std;

class PizzaComponent {
protected:
    double price;
    string name;

public:
    PizzaComponent(double p, string n) : price(p), name(n) {}
    virtual ~PizzaComponent() {}

    virtual string getName() = 0;
    virtual double getPrice() = 0;
};

#endif
