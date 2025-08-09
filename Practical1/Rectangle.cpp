//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#include "Rectangle.h"

Rectangle::Rectangle(int l, int w, string c, int px, int py) : Shape(l, w, c, px, py){
    
}

Shape* Rectangle::clone() const{
    return new Rectangle(*this);
}

int Rectangle::getLength() const{
    return l;
}

int Rectangle::getWidth() const{
    return w;
}

std::string Rectangle::getColour() const{
    return s;
}

int Rectangle::getPositionX const(){
    return px;
}

int Rectangle::getPositionY const(){
    return py;
}

void Rectangle::setLength(int length){
    if(length >= 0){
        l = length;
    }
}

void Rectangle::setWidth(int width){
    if(width >= 0){
        w = width;
    }
}

void Rectangle::setColour(std::string& colour){
    c = colour;
}

void Rectangle::setPositionX(int x){
    if(x >= 0){
        px = x;
    }
}

void Rectangle::setPositionY(int y){
    if(y >= 0){
        py = y;
    }
}