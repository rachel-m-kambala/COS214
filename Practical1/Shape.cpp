#include "Shape.h"


Shape::Shape()
    : length(0), width(0), colour("White"), positionX(0), positionY(0) {}


Shape::Shape(int length, int width, const std::string& colour, int positionX, int positionY)
    : length(length), width(width), colour(colour), positionX(positionX), positionY(positionY) {}

Shape::~Shape() {}


int Shape::getLength() const {
    return length;
}

int Shape::getWidth() const {
    return width;
}

std::string Shape::getColour() const {
    return colour;
}

int Shape::getPositionX() const {
    return positionX;
}

int Shape::getPositionY() const {
    return positionY;
}


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
    positionX = x;
}

void Shape::setPositionY(int y) {
    positionY = y;
}
