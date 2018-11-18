//
// Created by Filip Stamenkovic on 11/18/2018.
//

#ifndef TREES_AND_GRAPHS_BINARYSEARCHTREE_H
#define TREES_AND_GRAPHS_BINARYSEARCHTREE_H

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Node
{
  
  Node *left;
  Node *right;
  int data;
  
  friend class BinarySearchTree;

public:
  Node();
  Node(int number);
  void insert(int number);
  void inorder();
  void preorder();
  void postorder();
  int maxDepth();
  int minDepth();
  Node* insert(vector<int> nums, int start, int end);
  
};


class BinarySearchTree
{
  
  Node *root;

public:
  BinarySearchTree();
  BinarySearchTree* makeMinHeightTree(vector<int> elements);
  void insert(int number);
  void inorder();
  void preorder();
  void postorder();
  int maxDepth();
  int minDepth();
};


#endif //TREES_AND_GRAPHS_BINARYSEARCHTREE_H
