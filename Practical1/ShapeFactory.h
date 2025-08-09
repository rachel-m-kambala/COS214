#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include <string>
#include "Shape.h"

class ShapeFactory {
public:
    virtual ~ShapeFactory();
    virtual Shape* createShape() = 0;
    virtual std::string toString() = 0;
};

#endif
