#include "RectangleFactory.h"
#include "Rectangle.h"

Shape* RectangleFactory::createShape() {
    return new Rectangle(10, 20, "red", 0, 0);
}

std::string RectangleFactory::toString() {
    return "Rectangle";
}
