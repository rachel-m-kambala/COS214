#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle();
    Rectangle(int length, int width, const std::string& colour, int positionX, int positionY);

    void draw() override;
    Shape* clone() const override;
};

#endif
