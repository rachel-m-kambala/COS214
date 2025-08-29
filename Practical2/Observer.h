//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

class Observer {
    public:
        virtual void update(std::string message) = 0;
};

#endif