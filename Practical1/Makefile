main: main.o canvas.o
	 g++ main.o canvas.o -o main

main.o: main.cpp canvas.h 
	 g++ -c main.cpp

canvas.o: canvas.cpp canvas.h 
	 g++ -c canvas.cpp

run:
	 ./main

clean:
	 rm -f *.o main

valgrind:
	 valgrind --leak-check=full ./main

