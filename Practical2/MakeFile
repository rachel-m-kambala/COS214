CXX = g++
CXXFLAGS = -Wall -std=c++11
OBJ = main.o BasePizza.o ExtraCheese.o StuffedCrust.o Topping.o ToppingGroup.o PizzaDecorator.o Menus.o PizzaMenu.o SpecialsMenu.o Observer.o Customer.o Website.o Pizza.o  DoughAndSauceState.o ToppingsAddedState.o InOvenState.o ReadyForCollectionState.o
TARGET = pizza

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

PizzaDecorator.o: PizzaDecorator.cpp PizzaDecorator.h Pizza.h
	$(CXX) $(CXXFLAGS) -c PizzaDecorator.cpp


main.o: main.cpp Pizza.h BasePizza.h ExtraCheese.h StuffedCrust.h Topping.h ToppingGroup.h
	$(CXX) $(CXXFLAGS) -c main.cpp

BasePizza.o: BasePizza.cpp BasePizza.h Pizza.h PizzaComponent.h
	$(CXX) $(CXXFLAGS) -c BasePizza.cpp

ExtraCheese.o: ExtraCheese.cpp ExtraCheese.h PizzaDecorator.h Pizza.h
	$(CXX) $(CXXFLAGS) -c ExtraCheese.cpp

StuffedCrust.o: StuffedCrust.cpp StuffedCrust.h PizzaDecorator.h Pizza.h
	$(CXX) $(CXXFLAGS) -c StuffedCrust.cpp

Topping.o: Topping.cpp Topping.h PizzaComponent.h
	$(CXX) $(CXXFLAGS) -c Topping.cpp

ToppingGroup.o: ToppingGroup.cpp ToppingGroup.h PizzaComponent.h
	$(CXX) $(CXXFLAGS) -c ToppingGroup.cpp

Menus.o: Menus.cpp Menus.h Pizza.h Observer.h
	$(CXX) $(CXXFLAGS) -c Menus.cpp

PizzaMenu.o: PizzaMenu.cpp PizzaMenu.h Menus.h
	$(CXX) $(CXXFLAGS) -c PizzaMenu.cpp

SpecialsMenu.o: SpecialsMenu.cpp SpecialsMenu.h Menus.h
	$(CXX) $(CXXFLAGS) -c SpecialsMenu.cpp

Customer.o: Customer.cpp Customer.h Observer.h
	$(CXX) $(CXXFLAGS) -c Customer.cpp

Website.o: Website.cpp Website.h Observer.h
	$(CXX) $(CXXFLAGS) -c Website.cpp

Pizza.o: Pizza.cpp Pizza.h DiscountStrategy.h Observer.h
	$(CXX) $(CXXFLAGS) -c Pizza.cpp

run: $(TARGET)
	./$(TARGET)

valgrind: $(TARGET)
	valgrind --leak-check=full --show-leak-kinds=all ./$(TARGET)

clean:
	rm -f *.o $(TARGET)
