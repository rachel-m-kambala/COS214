#include "ExportCanvas.h"

ExportCanvas::ExportCanvas(Canvas* c) : canvas(c) {}

ExportCanvas::~ExportCanvas() {}

void ExportCanvas::exportToFile() {
    prepareCanvas();
    renderElements();
    saveToFile();
}