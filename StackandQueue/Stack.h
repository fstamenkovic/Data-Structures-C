//
// Created by Filip Stamenkovic on 11/18/2018.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

#include "Node.h"

class Stack{
  Node *top;
  int size;
  friend class MyQueue;
public:
  Stack();
  int getSize();
  void push(int number);
  void displayStack();
  int pop();
};


#endif //STACK_STACK_H
