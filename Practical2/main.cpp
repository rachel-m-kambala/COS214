#include <iostream>
#include <vector>
#include "Topping.h"
#include "ToppingGroup.h"
#include "BasePizza.h"
#include "ExtraCheese.h"
#include "StuffedCrust.h"

int main() {
    // Build composite Pepperoni pizza
    ToppingGroup* pepperoniToppings = new ToppingGroup("Pepperoni Pizza");
    pepperoniToppings->add(new Topping(5.0, "Dough"));
    pepperoniToppings->add(new Topping(2.0, "Sauce"));
    pepperoniToppings->add(new Topping(3.0, "Cheese"));
    pepperoniToppings->add(new Topping(4.0, "Pepperoni"));

    // Build composite Vegetarian pizza
    ToppingGroup* vegetarianToppings = new ToppingGroup("Vegetarian Pizza");
    vegetarianToppings->add(new Topping(5.0, "Dough"));
    vegetarianToppings->add(new Topping(2.0, "Sauce"));
    vegetarianToppings->add(new Topping(3.0, "Cheese"));
    vegetarianToppings->add(new Topping(2.0, "Mushrooms"));
    vegetarianToppings->add(new Topping(2.0, "Green Peppers"));
    vegetarianToppings->add(new Topping(2.0, "Onions"));

    // Create pizzas using BasePizza
    Pizza* basePepperoni = new BasePizza(pepperoniToppings);
    Pizza* baseVegetarian = new BasePizza(vegetarianToppings);

    // Decorate pizzas
    Pizza* pepperoniExtra = new ExtraCheese(basePepperoni);
    Pizza* vegetarianDeluxe = new StuffedCrust(new ExtraCheese(baseVegetarian));

    // Store all pizzas in a vector
    std::vector<Pizza*> pizzaMenu;
    pizzaMenu.push_back(pepperoniExtra);
    pizzaMenu.push_back(vegetarianDeluxe);

    // Print all pizzas
    for (int i = 0; i < pizzaMenu.size(); i++) {
        pizzaMenu[i]->printPizza();
    }

    // Cleanup
    for (int i = 0; i < pizzaMenu.size(); i++) {
        delete pizzaMenu[i]; // deletes decorated pizzas and underlying BasePizza
    }

    return 0;
}
