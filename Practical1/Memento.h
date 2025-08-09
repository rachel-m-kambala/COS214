//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#ifndef MEMENTO.h
#define MEMENTO.h

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

#include "Shape.h"

class Memento{
    public:
        Memento(Shape** shapes, int count);
        ~Memento();
        Shape** getState() const;
        int getCount() const;
    
    private:
        Shape** shapes;
        int count;
};

#endif