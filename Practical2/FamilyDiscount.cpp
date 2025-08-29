//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "FamilyDiscount.h"

double FamilyDiscount::applyDiscount(double price, int quantity) {
    double total = price * quantity;
    double discount = 0.15;
    double discountedPrice = total * (1 - discount);
    return discountedPrice;
}