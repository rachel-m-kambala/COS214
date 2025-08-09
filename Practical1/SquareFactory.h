//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#ifndef SQUAREFACTORY_H
#define SQUAREFACTORY_H

#include "ShapeFactory.h"

class SquareFactory : public ShapeFactory {
public:
    Shape* createShape() override;
    std::string toString() override;
};

#endif
