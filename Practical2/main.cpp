#include "BasePizza.h"
#include "ToppingGroup.h"
#include "Topping.h"
#include "ExtraCheese.h"
#include "StuffedCrust.h"
#include <iostream>

int main() {
    ToppingGroup* vegetarianBase = new ToppingGroup("Vegetarian");
    vegetarianBase->add(new Topping(2.0, "Mushrooms"));
    vegetarianBase->add(new Topping(2.0, "Green Peppers"));
    vegetarianBase->add(new Topping(2.0, "Onions"));

    ToppingGroup* vegetarianDeluxeGroup = new ToppingGroup("Vegetarian Deluxe");
    vegetarianDeluxeGroup->add(vegetarianBase);
    vegetarianDeluxeGroup->add(new Topping(3.0, "Feta Cheese"));
    vegetarianDeluxeGroup->add(new Topping(2.5, "Olives"));

    BasePizza* vegetarianDeluxe = new BasePizza(vegetarianDeluxeGroup);

    Pizza* decoratedPizza = new ExtraCheese(new StuffedCrust(vegetarianDeluxe));

    decoratedPizza->printPizza();

    delete decoratedPizza;

    return 0;
}
