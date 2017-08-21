CC=g++
CFLAGS=-I./headers/
HD=./headers/
	
test: counting.cpp $(HD)counting.h $(HD)calc.h calc.cpp
	$(CC) -o test main.cpp counting.cpp calc.cpp $(CFLAGS)

counting.cpp:
	touch counting.cpp
