// //Mukaji Mweni Rachel Kambala u23559129
// //Jerusha Thaver u23686376

// #include "Canvas.h"

// Canvas::Canvas() {
//     shapes = NULL;
//     shapeCount = 0;
// }

// Canvas::~Canvas() {
//     if (shapes != NULL) {
//         for (int i = 0; i < shapeCount; i++) {
//             delete shapes[i];
//         }
//         delete [] shapes;
//     }
// }

// void Canvas::addShape(Shape* s) {
//     Shape** temp = new Shape*[shapeCount + 1];
//     for (int i = 0; i < shapeCount; i++) {
//         temp[i] = shapes[i];
//     }
//     temp[shapeCount] = s;
//     delete [] shapes;
//     shapes = temp;
//     shapeCount++;
// }

// void Canvas::removeShape(int index) {
//     if (index < 0 || index >= shapeCount) {
//         return; // Invalid index
//     }
//     delete shapes[index];

//     Shape** temp = NULL;
//     if (shapeCount > 1) {
//         temp = new Shape*[shapeCount - 1];
//         int pos = 0;
//         for (int i = 0; i < shapeCount; i++) {
//             if (i != index) {
//                 temp[pos++] = shapes[i];
//             }
//         }
//     }
//     delete [] shapes;
//     shapes = temp;
//     shapeCount--;
// }

// void Canvas::display() const {
//     std::cout << "Canvas contains " << shapeCount << " shapes:" << std::endl;
//     for (int i = 0; i < shapeCount; i++) {
//         std::cout << " - " << shapes[i]->toString() << std::endl;
//     }
// }

// Memento* Canvas::captureCurrent() {
//     return new Memento(shapes, shapeCount);
// }

// void Canvas::undoAction(Memento* prev) {
//     // Delete current shapes
//     for (int i = 0; i < shapeCount; i++) {
//         delete shapes[i];
//     }
//     delete [] shapes;

//     // Restore shapes from Memento (deep copy using clone)
//     shapeCount = prev->getCount();
//     shapes = new Shape*[shapeCount];
//     for (int i = 0; i < shapeCount; i++) {
//         shapes[i] = prev->getState()[i]->clone();
//     }
// }

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
        std::cout <<  std::endl;
    }
    
}

int Canvas::getShapeCount(){
    return count;
}

    Memento* Canvas::captureCurrent() {
        return new Memento(shapes, count);
    }

    void Canvas::undoAction(Memento* prev) {
        // Delete current shapes
        for (int i = 0; i < count; i++) {
                    delete shapes[i];
        }
        delete [] shapes;

        // Restore shapes from Memento (deep copy using clone)
        count = prev->getCount();
        shapes = new Shape*[count];
        for (int i = 0; i < count; i++) {
            shapes[i] = prev->getState()[i]->clone();
        }
    }