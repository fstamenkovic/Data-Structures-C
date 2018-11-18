adt.out: main.o MyQueue.o Stack.o Queue.o node.o
	g++ -o adt.out main.o Stack.o Queue.o MyQueue.o Node.o

node.o: Node.cpp
	g++ -g -c Node.cpp

stack.o: Stack.cpp Node.h
	g++ -g -c Stack.cpp -std=gnu++11

myqueue.o: MyQueue.cpp Stack.h 
	g++ -g -c MyQueue.cpp -std=gnu++11

queue.o: Queue.cpp
	g++ -g -c Queue.cpp -std=gnu++11

main.o: main.cpp Queue.h MyQueue.h Stack.h
	g++ -g -c main.cpp -std=gnu++11

clean:
	rm -f main.o adt.out Queue.o MyQueue.o Stack.o Node.o
