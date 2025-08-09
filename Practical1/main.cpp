#include <iostream>
#include "Canvas.h"
#include "RectangleFactory.h"
#include "SquareFactory.h"
#include "TextboxFactory.h"
<<<<<<< HEAD
#include "Memento.h"
#include "CareTaker.h"
=======
#include "ShapeFactory.h"
#include "Memento.h"
>>>>>>> 1dbcb02f2b478570bbdf5359c744226576525472

int main() {
    Canvas canvas;

    ShapeFactory* rectFactory = new RectangleFactory();
    ShapeFactory* squareFactory = new SquareFactory();
    ShapeFactory* textboxFactory = new TextboxFactory();
    
    std::cout << "Creating shapes..." << std::endl;
    canvas.addShape(rectFactory->createShape());
    caretaker.addMemento(canvas.captureCurrent());

    canvas.addShape(squareFactory->createShape());
    caretaker.addMemento(canvas.captureCurrent());

    canvas.addShape(textboxFactory->createShape());
    caretaker.addMemento(canvas.captureCurrent());

    std::cout << "--- Current Canvas ---" << std::endl;
    canvas.display();

    std::cout << "Number of shapes:" << canvas.getShapeCount() << std::endl;

    std::cout << "--- Canvas After Undo ---" << std::endl;
    canvas.display();
    std::cout << "Number of shapes: " << canvas.getShapeCount() << std::endl;

    delete rectFactory;
    delete squareFactory;
    delete textboxFactory;

    return 0;
}
