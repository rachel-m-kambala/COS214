#include "BasePizza.h"
#include "ToppingGroup.h"
#include "Topping.h"
#include "ExtraCheese.h"
#include "StuffedCrust.h"

#include "RegularPrice.h"
#include "BulkDiscount.h"
#include "FamilyDiscount.h"

#include "DoughAndSauceState.h"
#include "ToppingsAddedState.h"
#include "InOvenState.h"
#include "ReadyForCollectionState.h"

#include "PizzaMenu.h"
#include "SpecialsMenu.h"
#include "Customer.h"
#include "Website.h"

#include <iostream>

int main() {
    // ------------------------
    // Create Toppings & Groups
    // ------------------------
    ToppingGroup* vegetarianBaseToppings = new ToppingGroup("Vegetarian");
    vegetarianBaseToppings->add(new Topping(2.0, "Mushrooms"));
    vegetarianBaseToppings->add(new Topping(2.0, "Green Peppers"));
    vegetarianBaseToppings->add(new Topping(2.0, "Onions"));

    ToppingGroup* vegetarianDeluxeGroup = new ToppingGroup("Vegetarian Deluxe");
    vegetarianDeluxeGroup->add(new ToppingGroup(*vegetarianBaseToppings));
    vegetarianDeluxeGroup->add(new Topping(3.0, "Feta Cheese"));
    vegetarianDeluxeGroup->add(new Topping(2.5, "Olives"));

    ToppingGroup* pepperoniToppings = new ToppingGroup("Pepperoni Pizza");
    pepperoniToppings->add(new Topping(4.0, "Pepperoni"));

    // ------------------------
    // Create Base Pizzas
    // ------------------------
    BasePizza* basePepperoni = new BasePizza(pepperoniToppings); 
    Pizza* myPizza = basePepperoni;

    BasePizza* vegetarianDeluxe = new BasePizza(vegetarianDeluxeGroup); 
    Pizza* decoratedPizza = new ExtraCheese(new StuffedCrust(vegetarianDeluxe));

    // ------------------------
    // Print Pizzas
    // ------------------------
    myPizza->printPizza();
    decoratedPizza->printPizza();

    // ------------------------
    // Observer Pattern Setup
    // ------------------------
    SpecialsMenu specialsMenu;
    PizzaMenu pizzaMenu;

    Website website1;
    Website website2;

    Customer c1("PizzaLover123");
    Customer c2("Foodie456");

    specialsMenu.addObserver(&website1);
    pizzaMenu.addObserver(&website2);
    specialsMenu.addObserver(&c1);
    pizzaMenu.addObserver(&c2);

    BasePizza* vegBasePizza = new BasePizza(new ToppingGroup(*vegetarianBaseToppings));
    specialsMenu.addPizza(vegBasePizza);
    specialsMenu.addPizza(vegetarianDeluxe);

    specialsMenu.removePizza(vegBasePizza);
    specialsMenu.removeObserver(&website2);
    specialsMenu.addPizza(basePepperoni);

    // ------------------------
    // State Pattern Test
    // ------------------------
    myPizza->setState(new DoughAndSauceState());
    myPizza->printState();

    myPizza->nextState();     // Toppings added
    myPizza->printState();

    myPizza->nextState();     // In oven
    myPizza->printState();

    myPizza->nextState();     // Ready for collection
    myPizza->printState();

    myPizza->previousState(); // In oven
    myPizza->printState();

    myPizza->previousState(); // Toppings added
    myPizza->printState();

    // ------------------------
    // Clean up memory
    // ------------------------
    delete decoratedPizza;     
    delete myPizza;            
    delete vegBasePizza;       

    delete vegetarianBaseToppings;
   

    return 0;
}









    // Customer c1("PizzaLover123");
    // Customer c2("Foodie456");
    // Website site;

    // PizzaMenu pizzaMenu;
    // SpecialsMenu specialsMenu;

    // pizzaMenu.addObserver(&c1);
    // pizzaMenu.addObserver(&site);
    // specialsMenu.addObserver(&c2);
    // specialsMenu.addObserver(&site);

    // pizzaMenu.addPizza(myPizza);
    // specialsMenu.addPizza(decoratedPizza);

    // pizzaMenu.removePizza(myPizza);
    // specialsMenu.removePizza(decoratedPizza);


    // Website website;

    // decoratedPizza->addObserver(&customer);
    // decoratedPizza->addObserver(&website);

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