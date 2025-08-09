//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#ifndef CARETAKER.h
#define CARETAKER.h

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

#include "Memento.h"

class Caretaker {
   public:
        CareTaker(int c = 100);
        ~CareTaker();
        
        void addMemento(Memento* m);
        Memento* getLastMemento();
   
    private:
        Memento** history;
        int count;
        int capacity;
};

#endif