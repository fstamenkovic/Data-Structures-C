//
// Created by Filip Stamenkovic on 11/18/2018.
//

#include "LinkedList.h"

using namespace std;


void LinkedList::append_at_end(int d){
  if(head == NULL) {
    head = new Node(d);
  }
  
  else{
    Node *end = new Node(d);
    Node *n;
    
    for(n = head; n->next != NULL; n = n->next){}
    n->next = end;
    
  }
}

void LinkedList::insert_pos(int d, int pos){
  if(head->next == NULL)
    head = new Node(d);
  
  else{
    Node *newNode = new Node(d);
    Node *n;
    
    int currPos = 0;
    for(n = head; n->next != NULL && currPos < pos; n = n->next){currPos += 1;}
    
    if(n->next == NULL && currPos != pos)
      n->next = newNode;
    
    else{
      newNode->next = n->next;
      n->next = newNode;
    }
  }
}

void LinkedList::insert_at_start(int d){
  Node *newHead = new Node(d);
  newHead->next = head;
  head = newHead;
}

void LinkedList::delete_pos(int pos){
  Node *current = head;
  Node *previous;
  int currPos = 0;
  
  if(pos == 0)
    head = head->next;
  
  for(currPos = 0; currPos != pos; currPos++){
    if(current->next != NULL){
      previous = current;
      current = current->next;
    }
  }
  
  previous->next = current->next;
}

void LinkedList::display(){
  for(Node *node = head; node != NULL; node = node->next){
    cout << node->data << " ";
  }
  
  cout << endl;
}

void LinkedList::nth_to_last(int n){
  Node *current;
  int size = 1;
  for(current = head; current->next != NULL; current = current->next){size++;}
  
  int element_index = size - n;
  current = head;
  
  for(int currIndex = 0; currIndex != element_index && current->next != NULL; currIndex++){current = current->next;}
  
  cout << "Element " << n << " spaces from the end is: " << current->data << endl;
}


void LinkedList::delete_duplicates(){
  for(Node *node = head; node != NULL; node = node->next){ //cycle through every node and delete it's duplicates
    Node * current = node->next;
    Node * previous = node;
    int node_data = node->data;
    
    while(current != NULL){
      if(node_data == current->data){
        previous->next = current->next;
      }
      
      previous = current;
      current = current->next;
    }
  }
}