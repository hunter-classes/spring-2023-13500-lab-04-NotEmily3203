main: main.o box.o cross.o lower.o upper.o
	g++ -o main main.o box.o cross.o lower.o upper.o

main.o: main.cpp box.h cross.o lower.h upper.o
	g++ -c main.cpp

box.o: box.cpp box.h 
	g++ -c box.cpp

cross.o: cross.cpp cross.h
	g++ -c cross.cpp

lower.o: lower.cpp lower.h
	g++ -c lower.cpp

upper.o: upper.cpp upper.h
	g++ -c upper.cpp

clean:
	rm -f main.o box.o cross.o lower.o upper.o