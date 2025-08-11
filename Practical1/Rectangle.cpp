#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : Shape() {}

Rectangle::Rectangle(int length, int width, const std::string& colour, int positionX, int positionY)
    : Shape(length, width, colour, positionX, positionY) {}

void Rectangle::draw() {
    std::cout << "Drawing Rectangle of size " << getLength() << "x" << getWidth()
              << " at (" << getPositionX() << "," << getPositionY() << ") with colour " << getColour() << std::endl;
    std::cout << "-----------------------------"  << std::endl;
    std::cout << "|                            |" << std::endl;
    std::cout << "|                            |" << std::endl;
    std::cout << "|                            |" << std::endl;
    std::cout << "|                            |" << std::endl;
    std::cout << "|                            |" << std::endl;
    std::cout << "-----------------------------"  << std::endl;         
}

Shape* Rectangle::clone(){
    return new Rectangle(*this);
}
