#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"

class CareTaker {
private:
    Memento** history;
    int size;
    int capacity;
public:
    CareTaker(int capacity);
    ~CareTaker();
    void addMemento(Memento* m);
    Memento* getMemento(int index);
};

#endif
