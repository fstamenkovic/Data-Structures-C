//
// Created by Filip Stamenkovic on 11/18/2018.
//


#include "Stack.h"
#include "Queue.h"
#include "MyQueue.h"

int main(){
  vector<int> nums = {1, 3, 4, 5, 2, 5, 8, 10};
  
  MyQueue *myQueue = new MyQueue();
  
  for(int i = 0; i < nums.size(); i++)
    myQueue->enqueue(nums[i]);
  
  myQueue->display();
  
  myQueue->dequeue();
  
  myQueue->dequeue();
  myQueue->dequeue();
  myQueue->dequeue();
  
  myQueue->display();
  
  myQueue->enqueue(3);
  myQueue->enqueue(5);
  
  myQueue->display();
  myQueue->dequeue();
  myQueue->display();
  
  
  return 0;
}
