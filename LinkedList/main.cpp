//
// Created by Filip Stamenkovic on 11/18/2018.
//
#include <iostream>
#include <unordered_map>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <vector>
#include "LinkedList.h"


using namespace std;

int main(){
  vector<int> nums = {1, 2, 3, 4, 3, 2, 10};
  
  LinkedList *list = new LinkedList();
  
  for(int num : nums){
    list->append_at_end(num);
  }
  
  list->display();
  
  list->delete_duplicates();
  
  list->display();
  
  list->nth_to_last(2);
  list->nth_to_last(5);
  list->nth_to_last(0);
  
  list->delete_pos(3);
  list->delete_pos(10);
  list->delete_pos(0);
  
  return 0;
}
