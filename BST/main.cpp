//
// Created by Filip Stamenkovic on 11/18/2018.
//

#include "BinarySearchTree.h"

int main(){
  BinarySearchTree *tree = new BinarySearchTree();
  
  tree->insert(4);
  tree->insert(2);
  tree->insert(1);
  tree->insert(3);
  tree->insert(5);
  
  tree->inorder();
  tree->preorder();
  tree->postorder();
  
  
  int maxdepth = tree->maxDepth();
  cout << "max depth: ";
  cout << maxdepth << endl;
  cout << "min depth: ";
  int mindepth = tree->minDepth();
  cout << mindepth << endl;
  
  
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  BinarySearchTree *minDepthTree = new BinarySearchTree();
  
  
  minDepthTree = minDepthTree->makeMinHeightTree(nums);
  cout << "Maximum depth is: " << minDepthTree->maxDepth() << endl;
  return 0;
}