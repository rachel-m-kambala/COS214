#include "Textbox.h"
#include <iostream>

Textbox::Textbox() : Shape(), text("") {}

Textbox::Textbox(int length, int width, const std::string& colour, int positionX, int positionY, const std::string& text)
    : Shape(length, width, colour, positionX, positionY), text(text) {}

void Textbox::draw() {
    std::cout << "Drawing Textbox of size " << getLength() << "x" << getWidth()
              << " at (" << getPositionX() << "," << getPositionY() << ") with colour " << getColour()
              << " containing text: " << text << std::endl;
}

Shape* Textbox::clone() const {
    return new Textbox(*this);
}

std::string Textbox::getText() const {
    return text;
}

void Textbox::setText(const std::string& text) {
    this->text = text;
}
