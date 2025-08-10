#include "PNGExporter.h"
#include <iostream>

PNGExporter::PNGExporter(Canvas* canvas): ExportCanvas(canvas){}

void PNGExporter::prepareCanvas() {
    std::cout << "Preparing canvas for PNG export." << std::endl;
}

void PNGExporter::renderElements() {
    std::cout << "Rendering elements for PNG export." << std::endl;
    //std::cout << getShapeCount() << " shapes being rendered as PNG..." << std::endl;
}

void PNGExporter::saveToFile() {
    std::cout << "Saving PNG file." << std::endl;
}
