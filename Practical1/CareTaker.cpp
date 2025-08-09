#include "CareTaker.h"

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
