#include "BasePizza.h"
#include "ToppingGroup.h"
#include "Topping.h"
#include "ExtraCheese.h"
#include "StuffedCrust.h"

int main() {
    ToppingGroup* pepperoniToppings = new ToppingGroup("Pepperoni Pizza");
    pepperoniToppings->add(new Topping(5.0, "Dough"));
    pepperoniToppings->add(new Topping(2.0, "Sauce"));
    pepperoniToppings->add(new Topping(3.0, "Cheese"));
    pepperoniToppings->add(new Topping(4.0, "Pepperoni"));

    BasePizza* basePepperoni = new BasePizza(pepperoniToppings);

    Pizza* myPizza = new ExtraCheese(new StuffedCrust(basePepperoni));

    myPizza->printPizza();

    delete myPizza;

    return 0;
}
