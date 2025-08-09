# Compiler and flags for C++98
CXX = g++
CXXFLAGS = -Wall -g -std=c++98

# Executable name
TARGET = main

# Source files
SRCS = \
    Canvas.cpp \
    Shape.cpp \
    Rectangle.cpp \
    Square.cpp \
    Textbox.cpp \
    ShapeFactory.cpp \
    RectangleFactory.cpp \
    SquareFactory.cpp \
    TextboxFactory.cpp \
    ExportCanvas.cpp \
    PNGExporter.cpp \
    PDFExporter.cpp \
    Memento.cpp \
    CareTaker.cpp \
    main.cpp

# Object files (replace .cpp with .o)
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link step
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile step
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(OBJS) $(TARGET)
