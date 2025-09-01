//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef PIZZACOMPONENT_H
#define PIZZACOMPONENT_H

#include <string>

class PizzaComponent {
public:
    virtual ~PizzaComponent() {}
    virtual double getPrice() = 0;
    virtual std::string getName() = 0;
    virtual PizzaComponent* clone() = 0;

};

#endif

