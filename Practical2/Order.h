#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "Pizza.h"           // Use Pizza* for polymorphism
#include "DiscountStrategy.h"

class Order {
private:
    std::vector<Pizza*> pizzas;    // Vector of pizzas in the order
    DiscountStrategy* discountStrategy;

public:
    Order();
    ~Order();

    void addPizza(Pizza* pizza);
    void setDiscountStrategy(DiscountStrategy* strategy);
    double calculateTotal();
    int getOrderSize();
};

#endif
