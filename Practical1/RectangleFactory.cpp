#include "RectangleFactory.h"
#include "Rectangle.h"

RectangleFactory::~RectangleFactory() {}

Shape* RectangleFactory::createShape() {
    return new Rectangle();
}

std::string RectangleFactory::toString() const {
    return "Rectangle";
}
