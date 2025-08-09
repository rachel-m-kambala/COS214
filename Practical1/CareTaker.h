#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"

class CareTaker {
<<<<<<< HEAD
   public:
        CareTaker(int c = 100);
        ~CareTaker();
        
        void addMemento(Memento* m);
        Memento* getLastMemento();
   
    private:
        Memento** history;
        int count;
        int capacity;
=======
private:
    Memento** history;
    int size;
    int capacity;
public:
    CareTaker(int capacity);
    ~CareTaker();
    void addMemento(Memento* m);
    Memento* getMemento(int index);
>>>>>>> 473863fd1baead4c5373a4fc649f04919ad01bb9
};

#endif
