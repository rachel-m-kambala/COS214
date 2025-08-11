#include <iostream>
#include "Canvas.h"
#include "RectangleFactory.h"
#include "SquareFactory.h"
#include "TextboxFactory.h"
#include "ShapeFactory.h"
#include "Memento.h"
#include "PDFExporter.h"
#include "PNGExporter.h"
#include "ExportCanvas.h"



int main() {
    Canvas canvas;

    RectangleFactory* rectFactory = new RectangleFactory();
    SquareFactory* squareFactory = new SquareFactory();
    TextboxFactory* textboxFactory = new TextboxFactory();

    std::cout << "Creating shapes..." << std::endl;
    canvas.addShape(rectFactory->createShape());
    canvas.addShape(squareFactory->createShape());
    canvas.addShape(textboxFactory->createShape());

    canvas.display();

    std::cout << "Number of shapes:" << canvas.getShapeCount() << std::endl;

    std::cout <<  std::endl;
    
    std::cout << "\nMemento Test" << std::endl;
    Memento* savedState = canvas.captureCurrent();
    int savedCount = canvas.getShapeCount();

    std::cout << std::endl;
    std::cout << "Removing last shape" << std::endl;
    canvas.removeLastShape();
    canvas.display();

    std::cout << "Restoring saved state" << std::endl;
    canvas.undoAction(savedState, savedCount);
    canvas.display();

    // After restoring, add another square shape
       std::cout <<  std::endl;
    std::cout << "Adding another square " << std::endl;
    canvas.addShape(squareFactory->createShape());
    canvas.display();

    std::cout << "Number of shapes after adding a new square: " << canvas.getShapeCount() << std::endl;

    delete savedState;

    // delete sqFactory; //
    delete rectFactory;
    delete squareFactory;
    delete textboxFactory;

    std::cout << "\nTesting PDFExporter:" << std::endl;
    PDFExporter pdfExporter(&canvas);
    pdfExporter.exportToFile();

    std::cout << "\nTesting PNGExporter:" << std::endl;
    PNGExporter pngExporter(&canvas);
    pngExporter.exportToFile();

    return 0;
}
