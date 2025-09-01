//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef SPECIALSMENU_H
#define SPECIALSMENU_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "Menus.h"

class SpecialsMenu : public Menus {
    public:
            SpecialsMenu();
    ~SpecialsMenu();
        void notifyObservers(std::string message);
};

#endif