# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17


# Executable name
TARGET = TestingMain
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

# Clean up object files and executable

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
