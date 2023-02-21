main: main.o box.o lower.o upper.o
	g++ -o main main.o box.o lower.o upper.o

main.o: main.cpp box.h lower.h
	g++ -c main.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

lower.o: lower.cpp lower.h
	g++ -c lower.cpp

upper.o: upper.cpp upper.h
	g++ -c upper.cpp

clean:
	rm -f main.o box.o lower.o upper.o