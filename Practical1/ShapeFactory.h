#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include <string>
#include "Shape.h"
//ShapeFactory is an abstract class with an abstract createShape() & toString() method.
/*Define how objects are created (but not what is created).

Delegate the actual creation to subclasses.*/
class ShapeFactory {
public:
    virtual ~ShapeFactory();
protected:
    virtual Shape* createShape() = 0;
    virtual std::string toString() = 0;
};

#endif
