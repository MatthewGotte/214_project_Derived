main: main.o
	g++ main.o -o main

main.o: main.cpp
	g++ -c main.cpp

run:
	./main

clean:
	rm *.o main

tar:
	tar -cvz *.cpp *.h -f Derived.tar.gz
	