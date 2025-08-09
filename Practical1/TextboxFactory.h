//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#ifndef TEXTBOXFACTORY_H
#define TEXTBOXFACTORY_H

#include "ShapeFactory.h"

class TextboxFactory : public ShapeFactory {
public:
    Shape* createShape() override;
    std::string toString() override;
};

#endif
