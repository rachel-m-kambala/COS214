//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#ifndef MENUS_H
#define MENUS_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include "Pizza.h"
#include "Observer.h"

class Menus{
    public:
        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);
        void addPizza(Pizza* pizza);
        void removePizza(Pizza* pizza);
        virtual void notifyObservers(std::string message) = 0;

    protected:
        std::vector<Observer*> observers;
        std::vector<Pizza*> pizzas;   
};

#endif