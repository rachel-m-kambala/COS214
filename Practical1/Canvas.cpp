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

/*creates a snapshot of the current canvas by creating a deep copy
of all the shapes on the canvas and returning a Memento object of the copied shapes*/
Memento* Canvas::captureCurrent() {
    Shape** shapesCopy = new Shape*[count];
    for (int i = 0; i < count; i++) {
        shapesCopy[i] = shapes[i]->clone();
    }
    return new Memento(shapesCopy, count);
}



/*restores the canvas to the previous state by deleting all the shapes that
are currently on  the canvas and recreates the canvas by creating a deep copy of the object in the memento*/
void Canvas::undoAction(Memento* prev, int savedCount) {
  
    for (int i = 0; i < count; i++) {
        delete shapes[i];
    }
    delete[] shapes;

    // IMPORTANT: keep capacity as it was, do NOT set to savedCount
    // capacity remains the same as originally allocated

    count = savedCount;

    // Allocate new shapes array with original capacity (not savedCount)
    //We allocate the new array with the original capacity because capacity shows the maximum number of shapes the 
    //canvas can hold. The canvas was designed with specific maximum capacity which is a structural property that
    //should not change. And after undoing you'd most probably want to add more shapes, if we allocated the array
    //with savedCount instead of capacity, we would be limiting the amount of shapes the canvas can hold.
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