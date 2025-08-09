#include "TextboxFactory.h"
#include "Textbox.h"

Shape* TextboxFactory::createShape() {
    return new Textbox(30, 10, "green", 10, 10, "Hello World");
}

std::string TextboxFactory::toString() {
    return "Textbox";
}
