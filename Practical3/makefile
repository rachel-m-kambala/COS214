# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17

# Executable name
TARGET = main
# Automatically find all .cpp files
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile each .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run program
run: $(TARGET)
	./$(TARGET)

# Run under Valgrind
valgrind: $(TARGET)
	valgrind --leak-check=full --show-leak-kinds=all ./$(TARGET)

# Build with coverage flags
coverage: CXXFLAGS += -fprofile-arcs -ftest-coverage
coverage: clean $(TARGET)
	./$(TARGET)
	gcov $(SRCS)

# Clean up
clean:
	rm -f $(OBJS) $(TARGET) *.gcno *.gcda *.gcov
