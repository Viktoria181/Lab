# Makefile

# Компилатор и флагове
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Изпълним файл
TARGET = program

# Списък с обектни файлове
OBJ = program.o swap.o

# Правило за създаване на изпълним файл
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Правило за компилиране на program.cpp до обектен файл
program.o: program.cpp swap.h
	$(CXX) $(CXXFLAGS) -c program.cpp

# Правило за компилиране на swap.cpp до обектен файл
swap.o: swap.cpp swap.h
	$(CXX) $(CXXFLAGS) -c swap.cpp

# Правило за почистване на обектните и изпълнимите файлове
clean:
	rm -f $(OBJ) $(TARGET)
