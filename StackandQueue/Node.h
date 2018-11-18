//
// Created by Filip Stamenkovic on 11/18/2018.
//

#ifndef STACK_NODE_H
#define STACK_NODE_H

#include <iostream>
#include <vector>

using namespace std;

class Node{
  int data;
  Node* next;
  
  friend class Stack;
  friend class Queue;

public:
  Node();
  Node(int d);
};


#endif //STACK_NODE_H
