//
// Created by Filip Stamenkovic on 11/18/2018.
//

#ifndef STACK_MYQUEUE_H
#define STACK_MYQUEUE_H

#include "Stack.h"

class MyQueue{
  Stack *stack1;
  Stack *stack2;
  int size;

public:
  MyQueue();
  void enqueue(int number);
  void dequeue();
  void display();
};


#endif //STACK_MYQUEUE_H
