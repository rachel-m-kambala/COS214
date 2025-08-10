#include "PDFExporter.h"
#include <iostream>

void PDFExporter::prepareCanvas() {
    std::cout << "Preparing canvas for PDF export." << std::endl;
}

void PDFExporter::renderElements() {
    std::cout << "Rendering elements for PDF export." << std::endl;
    std::cout << c.getShapeCount() << " shapes being rendered as PDF..." << std::endl;
}

void PDFExporter::saveToFile() {
    std::cout << "Saving PDF file." << std::endl;
}
