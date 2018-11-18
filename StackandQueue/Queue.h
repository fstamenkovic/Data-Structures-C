//
// Created by Filip Stamenkovic on 11/18/2018.
//

#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <vector>
#include <iostream>

using namespace std;

class Queue{
  vector<int> data;
  int front;
  int size;

public:
  Queue();
  void push(int number);
  void pop();
  void display();
};


#endif //STACK_QUEUE_H
