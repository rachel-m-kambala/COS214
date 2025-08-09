#ifndef MEMENTO_H
#define MEMENTO_H

#include "Shape.h"

class Memento {
private:
    Shape** shapes; 
     int count; 
public:
    Memento(Shape** elements, int count);
   //no deconstructor because of error 
    ~Memento();
    Shape** getState();
  

};

#endif
