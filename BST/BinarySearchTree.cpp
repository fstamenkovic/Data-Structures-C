//
// Created by Filip Stamenkovic on 11/18/2018.
//

#include "BinarySearchTree.h"


Node::Node(){
  right = nullptr;
  left = nullptr;
}

Node::Node(int number){
  right = nullptr;
  left = nullptr;
  data = number;
}

void Node::insert(int number){
  if(number < data){
    if(left)
      left->insert(number);
    
    else
      left = new Node(number);
  } //insert to the left child because number is smaller than the data
  
  if(number > data){
    if(right)
      right->insert(number);
    
    else
      right = new Node(number);
  } //insert to the right child because number is larger than the data
}

void Node::inorder(){
  
  if(left)
    left->inorder();
  
  cout << data << " ";
  
  if(right)
    right->inorder();
}

void Node::preorder(){
  cout << data << " ";
  
  if(left)
    left->preorder();
  
  if(right)
    right->preorder();
}

void Node::postorder(){
  if(left)
    left->postorder();
  
  if(right)
    right->postorder();
  
  cout << data << " ";
}

int Node::maxDepth(){
  if(!(left && right))
    return 0;
  
  else
    return 1 + max(left->maxDepth(), right->maxDepth());
}

int Node::minDepth(){
  if(!(right && left))
    return 0;
  
  else
    return 1 + min(left->maxDepth(), right->maxDepth());
  
}

Node* Node::insert(vector<int> nums, int start, int end)
{
  if(start > end)
    return nullptr;
  
  int middle = (start + end) / 2;
  Node *n = new Node(nums[middle]);
  n->left = n->insert(nums, start, middle - 1);
  n->right = n->insert(nums, middle + 1, end);
  
  return n;
}

BinarySearchTree::BinarySearchTree(){
  root = nullptr;
}

void BinarySearchTree::insert(int number){
  if(root == nullptr)
    root = new Node(number);
  
  else
    root->insert(number);
}

void BinarySearchTree::inorder(){
  if(root)
    root->inorder();
  
  cout << endl;
}

void BinarySearchTree::preorder(){
  if(root)
    root->preorder();
  
  cout << endl;
}

void BinarySearchTree::postorder(){
  if(root)
    root->postorder();
  
  cout << endl;
}

int BinarySearchTree::maxDepth(){
  int depth = 0;
  
  if(root)
    depth = 1 +  max(root->left->maxDepth(), root->right->maxDepth());
  
  return depth;
}

int BinarySearchTree::minDepth(){
  int depth = 0;
  
  if(root)
    depth = 1 + min(root->left->maxDepth(), root->right->maxDepth());
  
  return depth;
}

BinarySearchTree *BinarySearchTree::makeMinHeightTree(vector<int> elements)
{
  root = root->insert(elements, 0, (int) elements.size() - 1);
  
  return this;
}