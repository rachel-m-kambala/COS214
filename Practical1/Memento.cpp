#include "Memento.h"

Memento::Memento(Shape** elements, int count) : count(count) {
    shapes = elements;  // take ownership
}

Memento::~Memento() {
    for (int i = 0; i < count; i++) {
        delete shapes[i];
    }
    delete[] shapes;
}


Shape** Memento::getState() {
    return shapes;
}

