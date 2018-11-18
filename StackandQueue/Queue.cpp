//
// Created by Filip Stamenkovic on 11/18/2018.
//

#include "Queue.h"


Queue::Queue(){
  front = 0;
  size = 0;
}
void Queue::push(int number){
  data.push_back(number);
  size++;
}

void Queue::pop(){
  cout << data[front] << endl;
  front++;
  size--;
}

void Queue::display(){
  for(int i = front; i < size + front; i++){
    cout << data[i] << " ";
  }
  
  cout << endl;
}