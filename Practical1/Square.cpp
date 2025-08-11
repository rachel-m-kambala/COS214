#include "Square.h"
#include <iostream>

Square::Square() : Shape() {}

Square::Square(int size, const std::string& colour, int positionX, int positionY)
    : Shape(size, size, colour, positionX, positionY) {}

void Square::draw() {
    std::cout << "Drawing Square of size " << getLength()
              << " at (" << getPositionX() << "," << getPositionY() << ") with colour " << getColour() << std::endl;
    std::cout << "------------------"  << std::endl;
    std::cout << "|                 |" << std::endl;
    std::cout << "|                 |" << std::endl;
    std::cout << "|                 |" << std::endl;
    std::cout << "|                 |" << std::endl;
    std::cout << "|                 |" << std::endl;
    std::cout << "------------------"  << std::endl;          
}

Shape* Square::clone()  {
    return new Square(*this);
}
