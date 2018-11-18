//
// Created by Filip Stamenkovic on 11/18/2018.
//

#ifndef CTCI_LINKEDLIST_H
#define CTCI_LINKEDLIST_H

#include <iostream>

class Node{
  int data;
  Node *next;
  friend class LinkedList;
public:
  Node(){next = NULL;}
  Node(int d){
    data = d;
    next = NULL;
  }
};


class LinkedList
{
  Node *head;

public:
  LinkedList() { head = NULL; }
  void append_at_end(int d);
  void insert_pos(int d, int pos);
  void insert_at_start(int d);
  void delete_pos(int pos);
  void display();
  void nth_to_last(int n);
  void delete_duplicates();
  
};
#endif //CTCI_LINKEDLIST_H
