//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#ifndef RECTANGLE.h
#define RECTANGLE.h

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

#include "Shape.h"

class Rectangle : public Shape{
    public:
        Rectangle(int length, int width, std::string colour, int position_x, int position_y);
        Shape* clone();
    private:
        int length;
        int width;
        std::string colour;
        int position_x;
        int position_y;
}

#endif