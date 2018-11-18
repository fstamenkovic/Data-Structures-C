//
// Created by Filip Stamenkovic on 11/18/2018.
//

#include "Stack.h"


Stack::Stack(){
  top = NULL;
  size = 0;
}

int Stack::getSize(){return size;}

void Stack::push(int number){
  Node *newNode = new Node(number);
  newNode->next = top;
  top = newNode;
  size++;
}

void Stack::displayStack(){
  Node *n = top;
  for(int i = 0; i < size; i++){
    cout << n->data << " ";
    n = n->next;
  }
  
  cout << endl;
}

int Stack::pop(){
  if(top != NULL){
    //cout << top->data << " ";
    int retval = top->data;
    top = top->next;
    size--;
    return retval;
  }
}