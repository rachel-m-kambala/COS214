#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
private:
    int length;
    int width;
    std::string colour;
    int positionX;
    int positionY;

public:
    Shape();
    Shape(int length, int width, const std::string& colour, int positionX, int positionY);


    virtual ~Shape();

 
    int getLength() const;
    int getWidth() const;
    std::string getColour() const;
    int getPositionX() const;
    int getPositionY() const;


    void setLength(int length);
    void setWidth(int width);
    void setColour(const std::string& colour);
    void setPositionX(int x);
    void setPositionY(int y);

    virtual Shape* clone() const = 0;
};

#endif 
