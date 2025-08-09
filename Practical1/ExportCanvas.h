//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#ifndef EXPORTCANVAS.h
#define EXPORTCANVAS.h

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>

#include "Canvas.h"

class ExportCanvas{
    public:
        void export();
    private:
        Canvas* canvas;
        void prepareCanvas();
        void renderElements();
        virtual void saveToFile() = 0;
};
#endif