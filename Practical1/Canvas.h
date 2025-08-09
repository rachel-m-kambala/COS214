//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#ifndef CANVAS.h
#define CANVAS.h

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

#include "Memento.h"
#include "Shape.h"
#include "ShapeFactory.h"

class Canvas{
    public:
        Canvas();
        Memento* captureCurrent();
        ~Canvas();
        void addShape(Shape* s);
        void removeShape(Shape* int index);
        void display() const;
        void undoAction(Memento* prev);
    
        private:
        Shape** shapes;
        int shapeCount;
};

#endif //CANVAS