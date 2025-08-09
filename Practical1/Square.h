//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
public:
    Square();
    Square(int size, const std::string& colour, int positionX, int positionY);

    void draw() override;
    Shape* clone() const override;
};

#endif
