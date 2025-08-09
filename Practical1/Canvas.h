// Canvas.h
#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h"
#include "Memento.h"

class Canvas {
private:
    Shape** shapes;      // dynamic array of Shape pointers
    int shapeCount;      // number of shapes currently on canvas

public:
    Canvas();
    ~Canvas();

    void addShape(Shape* s);
    void removeShape(int index);
    void display();

    Memento* captureCurrent();
    void undoAction(Memento* prev);
};

#endif
