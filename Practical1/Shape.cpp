//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376
#include "Shape.h"

// Default constructor
Shape::Shape()
    : length(0), width(0), colour("none"), positionX(0), positionY(0) {}

// Parameterized constructor
Shape::Shape(int length, int width, const std::string& colour, int positionX, int positionY)
    : length(length), width(width), colour(colour), positionX(positionX), positionY(positionY) {}

Shape::~Shape() {}

int Shape::getLength()  {
    return length;
}

int Shape::getWidth()  {
    return width;
}

std::string Shape::getColour() {
    return colour;
}

int Shape::getPositionX() {
    return positionX;
}

int Shape::getPositionY() {
    return positionY;
}

// Setters
void Shape::setLength(int length) {
    this->length = length;
}

void Shape::setWidth(int width) {
    this->width = width;
}

void Shape::setColour(const std::string& colour) {
    this->colour = colour;
}

void Shape::setPositionX(int x) {
    this->positionX = x;
}

void Shape::setPositionY(int y) {
    this->positionY = y;
}

Shape* Shape::clone() const {
    
    return NULL;
}