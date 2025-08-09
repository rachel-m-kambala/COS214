#include "Memento.h"

Memento::Memento(Shape** elements, int count) {
    shapes = new Shape*[count];
    for (int i = 0; i < count; i++) {
        shapes[i] = elements[i]; // shallow copy
    }
}

Shape** Memento::getState() {
    return shapes;
}
