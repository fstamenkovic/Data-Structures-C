linkedlist.out: main.o LinkedList.o
	g++ -o linkedlist.out main.o LinkedList.o

LinkedList.o:
	g++ -g -c LinkedList.cpp

main.o: main.cpp LinkedList.h
	g++ -g -c main.cpp -std=gnu++11

clean:
	rm -f main.o linkedlist.out LinkedList.o
