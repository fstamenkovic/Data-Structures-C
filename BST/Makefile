bst.out: main.o BinarySearchTree.o
	g++ -o bst.out main.o BinarySearchTree.o

BinarySearchTree.o:
	g++ -g -c BinarySearchTree.cpp -std=gnu++11

main.o: main.cpp BinarySearchTree.h
	g++ -g -c main.cpp -std=gnu++11

clean:
	rm -f main.o bst.out BinarySearchTree.o
