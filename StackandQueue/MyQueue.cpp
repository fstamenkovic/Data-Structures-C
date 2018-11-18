//
// Created by Filip Stamenkovic on 11/18/2018.
//

#include "MyQueue.h"



MyQueue::MyQueue(){
  stack1 = new Stack();   //stack to store data
  stack2 = new Stack();    //stack to move the data to for a pop
  size = 0;
}

void MyQueue::enqueue(int number){
  stack1->push(number);
  size++;
}

void MyQueue::dequeue(){
  while(stack1->getSize() != 0){
    stack2->push(stack1->pop());
  }
  
  int popped = stack2->pop();
  
  cout << popped << endl;
  
  while(stack2->getSize() != 0){
    stack1->push(stack2->pop());
  }
}

void MyQueue::display(){
  while(stack1->getSize() != 0){
    stack2->push(stack1->pop());
  }
  
  stack2->displayStack();
  
  while(stack2->getSize() != 0){
    stack1->push(stack2->pop());
  }
}