#include "TextboxFactory.h"
#include "Textbox.h"
//RectangleFactory overrides createShape() to produce a specific type (Rectangle)
Shape* TextboxFactory::createShape() {
    return new Textbox(30, 10, "green", 10, 10, "Hello World");
}

std::string TextboxFactory::toString() {
    return "TEXTBOX";
}
