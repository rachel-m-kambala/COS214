#include "Order.h"


Order::Order() : discountStrategy(nullptr) {}

Order::~Order() {
    // do NOT delete pizzas, just clear vector
    pizzas.clear();
}


void Order::addPizza(Pizza* pizza) {
    pizzas.push_back(pizza);
}


void Order::setDiscountStrategy(DiscountStrategy* strategy) {
    discountStrategy = strategy;
}


double Order::calculateTotal() {
    double total = 0.0;
    for (Pizza* p : pizzas)
        total += p->getPrice();
    if (discountStrategy)
        return discountStrategy->applyDiscount(total, getOrderSize());

    return total;
}


int Order::getOrderSize() {
    return pizzas.size();
}
