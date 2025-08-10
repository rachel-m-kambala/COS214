#include "RectangleFactory.h"
#include "Rectangle.h"
//RectangleFactory overrides createShape() to produce a specific type (Rectangle)
Shape* RectangleFactory::createShape() {
    return new Rectangle(10, 20, "red", 0, 0);
}

std::string RectangleFactory::toString() {
    return "RECTANGLE";
}
