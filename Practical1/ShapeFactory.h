#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "Shape.h" 

class ShapeFactory {
public:
 
    virtual ~ShapeFactory();
    virtual Shape* createShape() = 0;
};

#endif
