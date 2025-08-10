//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376
#ifndef TEXTBOX_H
#define TEXTBOX_H

#include "Shape.h"
#include <string>

class Textbox : public Shape {
private:
    std::string text;

public:
    Textbox();
    Textbox(int length, int width, const std::string& colour, int positionX, int positionY, const std::string& text);

    void draw() override;
    Shape* clone()  override;

    std::string getText() const;
    void setText(const std::string& text);
};

#endif
