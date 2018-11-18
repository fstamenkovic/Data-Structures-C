linkedlist.out: main.o LinkedList.o
    g++ -o linkedlist.out main.o LinkedList.o

LinkedList.o: LinkedList.cpp LinkedList.h
    g++ -c LinkedList.cpp

main.o: main.cpp LinkedList.h
    g++ -c main.cpp

clean:
    rm -f linkedlist.out LinkedList.o main.o