CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: functions_to_implement

clean:
	rm functions_to_implement

functions_to_implement: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp -o functions_to_implement