#include "CareTaker.h"
/*the CareTaker manages the lifecycle of saved states.
the Constructor prepares storage for a capacity of saved states
the destructor safely deletes all saved states and the storage array to prevent memory leaks
addMemento adds a new memento object if space is available
getMemento() retrives a memento object by index*/
CareTaker::CareTaker(int capacity) {
    this->capacity = capacity;
    size = 0;
    history = new Memento*[capacity];
}

CareTaker::~CareTaker() {
    for (int i = 0; i < size; i++) {
        delete history[i];
    }
    delete[] history;
}

void CareTaker::addMemento(Memento* m) {
    if (size < capacity) {
        history[size++] = m;
    }
}

Memento* CareTaker::getMemento(int index) {
    if (index >= 0 && index < size) {
        return history[index];
    }
    return 0;
}
