// //Mukaji Mweni Rachel Kambala u23559129
// //Jerusha Thaver u23686376

#include "Canvas.h"
#include <iostream>

Canvas::Canvas(int capacity) : capacity(capacity), count(0) {
    shapes = new Shape*[capacity];
}

Canvas::~Canvas() {
    for (int i = 0; i < count; i++) {
        delete shapes[i];
    }
    delete[] shapes;
}

void Canvas::addShape(Shape* shape) {
    if (count < capacity) {
        shapes[count++] = shape;
    } else {
        std::cout << "Canvas full, cannot add more shapes." << std::endl;
    }
}

void Canvas::display() {
    for (int i = 0; i < count; i++) {
        std::cout << "Shape " << i + 1 << ": ";
        shapes[i]->draw();
        // std::cout <<  std::endl;
    }
    
}

int Canvas::getShapeCount(){
    return count;
}

  Memento* Canvas::captureCurrent() {
    return new Memento(shapes, count); 
}

void Canvas::undoAction(Memento* prev) {
    if (prev != NULL) {
        shapes = prev->getState();
        // remove: count = prev->getCount();
    }
}

void Canvas::removeLastShape() {
    if (count > 0) {
        delete shapes[count - 1];
        shapes[count - 1] = 0;
        count--;
    }
}