all:
	g++ -std=c++11 main.cpp `pkg-config --cflags --libs opencv` -o out
