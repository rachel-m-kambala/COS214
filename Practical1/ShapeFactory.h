#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include <string>
#include "Shape.h"
//ShapeFactory is an abstract class with an abstract createShape() & toString() method.
class ShapeFactory {
public:
    virtual ~ShapeFactory();
protected:
    virtual Shape* createShape() = 0;
    virtual std::string toString() = 0;
};

#endif
