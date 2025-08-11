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
    Shape** shapesCopy = new Shape*[count];
    for (int i = 0; i < count; i++) {
        shapesCopy[i] = shapes[i]->clone();
    }
    return new Memento(shapesCopy, count);
}




void Canvas::undoAction(Memento* prev, int savedCount) {
  
    for (int i = 0; i < count; i++) {
        delete shapes[i];
    }
    delete[] shapes;

    // IMPORTANT: keep capacity as it was, do NOT set to savedCount
    // capacity remains the same as originally allocated

    count = savedCount;

    // Allocate new shapes array with original capacity (not savedCount)
    shapes = new Shape*[capacity];

    Shape** savedShapes = prev->getState();

    for (int i = 0; i < count; i++) {
        shapes[i] = savedShapes[i]->clone(); 
    }
}





void Canvas::removeLastShape() {
    if (count > 0) {
        delete shapes[count - 1];   // delete the shape
        count--;
    }
    else {
        std::cout << "No shapes to remove." << std::endl;
    }
}