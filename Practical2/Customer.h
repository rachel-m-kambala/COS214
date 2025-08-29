//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "Observer.h"

class Customer : public Observer {
    public:
        Customer(std::string name);
        void update(std::string message);
    private:
        std::string name;
};

#endif