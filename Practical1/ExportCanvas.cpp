#include "ExportCanvas.h"

ExportCanvas::ExportCanvas(Canvas* c) : canvas(c) {}

ExportCanvas::~ExportCanvas() {}

void ExportCanvas::exportCanvas() {
    prepareCanvas();
    renderElements();
    saveToFile();
}