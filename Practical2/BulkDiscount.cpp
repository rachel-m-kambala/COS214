//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "BulkDiscount.h"

double BulkDiscount::applyDiscount(double price, int quantity) {
    if(quantity >= 5){
        double total = price * quantity;
        double discount = 0.10;
        double discountedPrice = total * (1 - discount);
        return discountedPrice;
    }
    return price * quantity;
}