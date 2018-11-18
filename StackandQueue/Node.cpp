//
// Created by Filip Stamenkovic on 11/18/2018.
//

#include "Node.h"


Node::Node() {
  next = NULL;
}

Node::Node(int d){
  data = d;
  next = NULL;
}