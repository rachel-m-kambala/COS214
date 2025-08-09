main: main.o Canvas.o Shape.o ShapeFactory.o RectangleFactory.o SquareFactory.o TextboxFactory.o  Square.o Rectangle.o Textbox.o Memento.o CareTaker.o ExportCanvas.o PDFExporter.o PNGExporter.o
	 g++ main.o Canvas.o Shape.o ShapeFactory.o RectangleFactory.o SquareFactory.o TextboxFactory.o Square.o Rectangle.o Textbox.o Memento.o CareTaker.o ExportCanvas.o PDFExporter.o PNGExporter.o -o main

main.o: main.cpp Canvas.h 
	 g++ -c main.cpp

Canvas.o: Canvas.cpp Canvas.h Shape.h
	 g++ -c Canvas.cpp

Shape.o: Shape.cpp Shape.h
	 g++ -c Shape.cpp

ShapeFactory.o: ShapeFactory.cpp ShapeFactory.h Shape.h
	 g++ -c ShapeFactory.cpp

SquareFactory.o: SquareFactory.cpp SquareFactory.h ShapeFactory.h
	 g++ -c SquareFactory.cpp

RectangleFactory.o: RectangleFactory.cpp RectangleFactory.h ShapeFactory.h
	 g++ -c RectangleFactory.cpp

TextboxFactory.o: TextboxFactory.cpp TextboxFactory.h ShapeFactory.h
	 g++ -c TextboxFactory.cpp

Square.o: Square.cpp Square.h Shape.h
	 g++ -c Square.cpp

Rectangle.o: Rectangle.cpp Rectangle.h Shape.h
	 g++ -c Rectangle.cpp

Textbox.o: Textbox.cpp Textbox.h Shape.h
	 g++ -c Textbox.cpp

Memento.o: Memento.cpp Memento.h Shape.h
	 g++ -c Memento.cpp

CareTaker.o: CareTaker.cpp CareTaker.h Memento.h
	 g++ -c CareTaker.cpp

ExportCanvas.o: ExportCanvas.cpp ExportCanvas.h
	 g++ -c ExportCanvas.cpp

PDFExporter.o: PDFExporter.cpp PDFExporter.h
	 g++ -c PDFExporter.cpp

PNGExporter.o: PNGExporter.cpp PNGExporter.h
	 g++ -c PNGExporter.cpp

run:
	 ./main

clean:
	 rm -f *.o main

valgrind:
	 valgrind --leak-check=full ./main

coverage_build:
	g++ --coverage -g -O0 -c main.cpp Canvas.cpp Shape.cpp ShapeFactory.cpp RectangleFactory.cpp SquareFactory.cpp TextboxFactory.cpp Square.cpp Rectangle.cpp Textbox.cpp Memento.cpp CareTaker.cpp ExportCanvas.cpp PDFExporter.cpp PNGExporter.cpp

coverage_link:
	g++ --coverage -g -O0 main.o Canvas.o Shape.o ShapeFactory.o RectangleFactory.o SquareFactory.o TextboxFactory.o Square.o Rectangle.o Textbox.o Memento.o CareTaker.o ExportCanvas.o PDFExporter.o PNGExporter.o -o main

coverage: clean coverage_build coverage_link

coverage_run:
	./main

coverage_report:
	gcov -f -m -r main.cpp Canvas.cpp Shape.cpp ShapeFactory.cpp RectangleFactory.cpp SquareFactory.cpp TextboxFactory.cpp Square.cpp Rectangle.cpp Textbox.cpp	Memento.cpp CareTaker.cpp ExportCanvas.cpp PDFExporter.cpp PNGExporter.cpp

coverage_all: coverage coverage_run coverage_report

coverage_clean:
	rm -f *.gcda *.gcno *.gcov
