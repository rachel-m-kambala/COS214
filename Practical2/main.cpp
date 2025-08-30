#include "BasePizza.h"
#include "ToppingGroup.h"
#include "Topping.h"
#include "ExtraCheese.h"
#include "StuffedCrust.h"
#include "RegularPrice.h"
#include "BulkDiscount.h"
#include "FamilyDiscount.h"
#include "Customer.h"
#include "Website.h"
#include "DoughAndSauceState.h"
#include "ToppingsAddedState.h"
#include "InOvenState.h"
#include "ReadyForCollectionState.h"
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


    // Set initial state for the pepperoni pizza
    myPizza->setState(new DoughAndSauceState());
    myPizza->printState();

    // Move through states
    myPizza->nextState();     // Toppings added
    myPizza->printState();

    myPizza->nextState();     // In oven
    myPizza->printState();

    myPizza->nextState();     // Ready for collection
    myPizza->printState();

    // Move backwards
    myPizza->previousState(); // In oven
    myPizza->printState();

    myPizza->previousState(); // Toppings added
    myPizza->printState();


    Customer customer("Pizza Lover");
    Website website;

    decoratedPizza->addObserver(&customer);
    decoratedPizza->addObserver(&website);

    // std::cout << "\n==== Initial Pizza ====" << std::endl;

    // RegularPrice regular;
    // BulkDiscount bulk;
    // FamilyDiscount family;
        
    // decoratedPizza->setStrategy(&regular);
    // decoratedPizza->printPizza();
    // std::cout << "Final Price: R" << decoratedPizza->getFinalPrice() << std::endl;

    // decoratedPizza->setStrategy(&bulk);
    // decoratedPizza->printPizza();
    // std::cout << "Final Price: R" << decoratedPizza->getFinalPrice() << std::endl;

    // decoratedPizza->setStrategy(&family);
    // decoratedPizza->printPizza();
    // std::cout << "Final Price: R" << decoratedPizza->getFinalPrice() << std::endl;

    // delete decoratedPizza;
    // delete myPizza;

    // std::cout << "\n==========================================================" << std::endl;
    // std::cout << "================= Extra Testing ====================" << std::endl;
    // std::cout << "==========================================================" << std::endl;

    // ToppingGroup* meatLovers = new ToppingGroup("Meat Lovers");
    // meatLovers->add(new Topping(5.0, "Dough"));
    // meatLovers->add(new Topping(2.0, "Tomato Sauce"));
    // meatLovers->add(new Topping(3.0, "Cheese"));
    // meatLovers->add(new Topping(4.0, "Pepperoni"));
    // meatLovers->add(new Topping(6.0, "Beef Sausage"));
    // meatLovers->add(new Topping(5.5, "Salami"));

    // BasePizza* baseMeatLovers = new BasePizza(meatLovers);

    // Pizza* stuffedFirst = new StuffedCrust(new ExtraCheese(baseMeatLovers));
    // Pizza* cheeseFirst = new ExtraCheese(new StuffedCrust(baseMeatLovers));

    // stuffedFirst->printPizza();
    // cheeseFirst->printPizza();

    // double total = 400;  // Pretend total
    // int fewPizzas = 2;
    // int manyPizzas = 6;

    // RegularPrice rp;
    // BulkDiscount bd;
    // FamilyDiscount fd;

    // std::cout << "Few pizzas bulk discount test: " << (bd.applyDiscount(total, fewPizzas) == total ? "PASS" : "FAIL")<< std::endl;
    // std::cout << "Many pizzas bulk discount test: " << (bd.applyDiscount(total, manyPizzas) == total * 0.9 ? "PASS" : "FAIL") << std::endl;
    // std::cout << "Family discount test: " << (fd.applyDiscount(total, fewPizzas) == total * 0.85 ? "PASS" : "FAIL") << std::endl;

    // delete stuffedFirst;
    // delete cheeseFirst;
    // delete baseMeatLovers;
    // delete vegetarianDeluxe;
    // delete pepperoniToppings;
    // delete basePepperoni;
    // delete vegetarianBase;

    return 0;
}
