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

        ToppingGroup* pepperoniToppings = new ToppingGroup("Pepperoni Pizza");
        pepperoniToppings->add(new Topping(5.0, "Dough"));
        pepperoniToppings->add(new Topping(2.0, "Sauce"));
        pepperoniToppings->add(new Topping(3.0, "Cheese"));
        pepperoniToppings->add(new Topping(4.0, "Pepperoni"));

        BasePizza* basePepperoni = new BasePizza(pepperoniToppings);

        Pizza* myPizza = basePepperoni;

        
        
        BasePizza* vegetarianDeluxe = new BasePizza(vegetarianDeluxeGroup);
        
        Pizza* decoratedPizza = new ExtraCheese(new StuffedCrust(vegetarianDeluxe));
        
        myPizza->printPizza();
        decoratedPizza->printPizza();
        
        delete decoratedPizza;
        delete myPizza;

    return 0;
}
