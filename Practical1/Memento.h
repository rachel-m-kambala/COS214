#ifndef MEMENTO_H
#define MEMENTO_H

#include "Shape.h"

class Memento {
private:
    Shape** shapes; 
public:
    Memento(Shape** elements, int count);
    Shape** getState();
};

#endif
