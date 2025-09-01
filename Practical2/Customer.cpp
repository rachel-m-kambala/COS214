// //MUKAJI MWENI RACHEL KAMBALA u23559129
// //JERUSHA THAVER u23686376

#include "Customer.h"

Customer::Customer(std::string name) : name(name) {}

// void Customer::update(std::string message) {
//     std::cout << "Notification for " << name << ": " << message << std::endl;
// };


// #include "Customer.h"

void Customer::update(const std::string message) {
    std::cout << "Customer received update: " << message << std::endl;
}
