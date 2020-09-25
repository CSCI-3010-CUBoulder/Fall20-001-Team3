CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: main

clean:
	rm functions_to_implement.o

maze: functions_to_implement.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp functions_to_implement.o -o main

functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp
