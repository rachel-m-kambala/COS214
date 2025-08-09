#include "SquareFactory.h"
#include "Square.h"

Shape* SquareFactory::createShape() {
    return new Square(15, "blue", 5, 5);
}

std::string SquareFactory::toString() {
    return "Square";
}
