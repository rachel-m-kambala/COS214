#include <iostream>
#include "Topping.h"
#include "ToppingGroup.h"
using namespace std;

int main() {
    // Base pizzas
    ToppingGroup* pepperoniPizza = new ToppingGroup("Pepperoni Pizza");
    pepperoniPizza->add(new Topping(5.0, "Dough"));
    pepperoniPizza->add(new Topping(2.0, "Sauce"));
    pepperoniPizza->add(new Topping(3.0, "Cheese"));
    pepperoniPizza->add(new Topping(4.0, "Pepperoni"));

    ToppingGroup* vegetarianPizza = new ToppingGroup("Vegetarian Pizza");
    vegetarianPizza->add(new Topping(5.0, "Dough"));
    vegetarianPizza->add(new Topping(2.0, "Sauce"));
    vegetarianPizza->add(new Topping(3.0, "Cheese"));
    vegetarianPizza->add(new Topping(2.0, "Mushrooms"));
    vegetarianPizza->add(new Topping(2.0, "Green Peppers"));
    vegetarianPizza->add(new Topping(2.0, "Onions"));

    // Extended pizzas
    ToppingGroup* meatLovers = new ToppingGroup("Meat Lovers");
    meatLovers->add(pepperoniPizza);
    meatLovers->add(new Topping(4.0, "Beef Sausage"));
    meatLovers->add(new Topping(4.0, "Salami"));

    ToppingGroup* vegetarianDeluxe = new ToppingGroup("Vegetarian Deluxe");
    vegetarianDeluxe->add(vegetarianPizza);
    vegetarianDeluxe->add(new Topping(3.0, "Feta Cheese"));
    vegetarianDeluxe->add(new Topping(2.0, "Olives"));

    // Print pizzas
    cout << pepperoniPizza->getName() << " -> Price: " << pepperoniPizza->getPrice() << endl;
    cout << vegetarianPizza->getName() << " -> Price: " << vegetarianPizza->getPrice() << endl;
    cout << meatLovers->getName() << " -> Price: " << meatLovers->getPrice() << endl;
    cout << vegetarianDeluxe->getName() << " -> Price: " << vegetarianDeluxe->getPrice() << endl;

    // Cleanup
    delete meatLovers;
    delete vegetarianDeluxe;

    return 0;
}
