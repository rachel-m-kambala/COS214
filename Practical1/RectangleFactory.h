#ifndef RECTANGLEFACTORY_H
#define RECTANGLEFACTORY_H

#include "ShapeFactory.h"
#include <string>

class RectangleFactory : public ShapeFactory {
public:
    virtual ~RectangleFactory();

    virtual Shape* createShape();

    std::string toString() const;
};

#endif 
