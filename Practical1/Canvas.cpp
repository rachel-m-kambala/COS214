//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#include "Canvas.h"

Canvas::Canvas() {
    shapes = NULL;
    shapeCount = 0;
}

Canvas::~Canvas() {
    if (shapes != NULL) {
        for (int i = 0; i < shapeCount; i++) {
            delete shapes[i];
        }
        delete [] shapes;
    }
}

void Canvas::addShape(Shape* s) {
    Shape** temp = new Shape*[shapeCount + 1];
    for (int i = 0; i < shapeCount; i++) {
        temp[i] = shapes[i];
    }
    temp[shapeCount] = s;
    delete [] shapes;
    shapes = temp;
    shapeCount++;
}

void Canvas::removeShape(int index) {
    if (index < 0 || index >= shapeCount) {
        return; // Invalid index
    }
    delete shapes[index];

    Shape** temp = NULL;
    if (shapeCount > 1) {
        temp = new Shape*[shapeCount - 1];
        int pos = 0;
        for (int i = 0; i < shapeCount; i++) {
            if (i != index) {
                temp[pos++] = shapes[i];
            }
        }
    }
    delete [] shapes;
    shapes = temp;
    shapeCount--;
}

void Canvas::display() const {
    std::cout << "Canvas contains " << shapeCount << " shapes:" << std::endl;
    for (int i = 0; i < shapeCount; i++) {
        std::cout << " - " << shapes[i]->toString() << std::endl;
    }
}

Memento* Canvas::captureCurrent() {
    return new Memento(shapes, shapeCount);
}

void Canvas::undoAction(Memento* prev) {
    // Delete current shapes
    for (int i = 0; i < shapeCount; i++) {
        delete shapes[i];
    }
    delete [] shapes;

    // Restore shapes from Memento (deep copy using clone)
    shapeCount = prev->getCount();
    shapes = new Shape*[shapeCount];
    for (int i = 0; i < shapeCount; i++) {
        shapes[i] = prev->getState()[i]->clone();
    }
}