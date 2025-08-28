#include "Memento.h"

Memento::Memento(Shape** elements, int count) : count(count) {
    shapes = elements;  // take ownership of the array of Shape pointers. Memento owns the array that was created in the canvas class
}

//deletes all shapes that were cloned to create the memento
Memento::~Memento() {
    for (int i = 0; i < count; i++) {
        delete shapes[i];
    }
    delete[] shapes;
}

//getter function to return the state back to the canvas
Shape** Memento::getState() {
    return shapes;
}

