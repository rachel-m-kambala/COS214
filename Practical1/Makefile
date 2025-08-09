main: main.o Canvas.o Shape.o ShapeFactory.o RectangleFactory.o SquareFactory.o TextboxFactory.o  Square.o Rectangle.o Textbox.o
	 g++ main.o Canvas.o Shape.o ShapeFactory.o RectangleFactory.o SquareFactory.o TextboxFactory.o Square.o Rectangle.o Textbox.o -o main

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

run:
	 ./main

clean:
	 rm -f *.o main

valgrind:
	 valgrind --leak-check=full ./main

