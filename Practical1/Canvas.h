// //Mukaji Mweni Rachel Kambala u23559129
// //Jerusha Thaver u23686376

#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h"
#include "Memento.h"

class Canvas {
    Shape** shapes;
    int capacity;
    int count;
    int savedCount;

public:
    Canvas(int capacity = 100);
    ~Canvas();

    int getShapeCount();
    void addShape(Shape* shape);
    void display();
    void undoAction(Memento* prev, int savedCount);
    Memento* captureCurrent();
    void removeLastShape();
};

#endif
