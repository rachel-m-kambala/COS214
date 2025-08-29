//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef PIZZAMENU_H
#define PIZZAMENU_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "Menus.h"

class PizzaMenu : public Menus {
    public:
        void notifyObservers(std::string message);
};

#endif