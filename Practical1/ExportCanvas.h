#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H

#include "Canvas.h"

class ExportCanvas {
private:
    Canvas* canvas;

public:
    ExportCanvas(Canvas* c);
    virtual ~ExportCanvas();

    void exportCanvas();

protected:
    virtual void prepareCanvas() = 0;
    virtual void renderElements() = 0;

private:
    virtual void saveToFile() = 0;
};

#endif
