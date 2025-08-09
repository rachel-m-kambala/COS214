//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#ifndef SHAPE.h
#define SHAPE.h

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

class Shape{
    public:
        Shape(int length, int width, string colour, int position_x, int position_y);
        virtual Shape* clone() = 0;
    
    private:
        int length;
        int width;
        string colour;
        int position_x;
        int position_y;
}

#endif