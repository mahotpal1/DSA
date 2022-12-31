#include <bits/stdc++.h>
#include "Operations.h"

Operations::Operations(char* t)
  :tree{*t}{

}

Operations::~Operations(){
  std::cout << "Destructor Called!!" << std::endl;
}

void Operations::print_tree(){
  std::cout << "Array Elements : " << std::endl;
  for(int i=0; i<sizeof(tree)/sizeof(char); i++){
    std::cout << tree[i] << " ";
  }
  std::cout << std::endl;
}

bool Operations::add_root(char key){
  if(tree[0] != '\0'){
    std::cout << "Root allready there in the tree" << std::endl;
    return false;
  }else{
    tree[0] = key;
    return true;
  }
}

bool Operations::add_left(char a, int parent){
  if(tree[parent] == '\0'){
    std::cout << "Cant set child at : " << (parent*2)+1 << ". No parent element found!" << std::endl;
    return false;
  }else{
    tree[(parent*2)+1] = a;
    return true;
  }
}

bool Operations::add_right(char a, int parent){
  if(tree[parent] == '\0'){
    std::cout << "Can't set child at : " << (parent*2)+2 << ". No parent Found!" << std::endl;
    return false;
  }else{
    tree[(parent*2)+2] = a;
    return true;
  }
}