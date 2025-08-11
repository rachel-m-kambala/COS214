// //Mukaji Mweni Rachel Kambala u23559129
// //Jerusha Thaver u23686376

#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h"
#include "Memento.h"

class Canvas {
private:
    Shape** shapes;
    int capacity;
    int savedCount;
    int count;
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
