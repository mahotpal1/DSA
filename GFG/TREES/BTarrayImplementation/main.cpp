#include <bits/stdc++.h>
#include "Operations.h"

int main(){
  char tree[10]={'\0'};
  Operations o = Operations(tree);
  if(o.add_root('A')){
    std::cout << "Added Successfully!!" << std::endl;
  }
  if(o.add_root('C')){
    std::cout << "Added Successfully!!!" << std::endl;
  }
  if(o.add_left('B',0)){
    std::cout << "Added Child!!" << std::endl;
  }
  if(o.add_right('C', 0)){
    std::cout << "Added Child!!" << std::endl;
  }
  if(o.add_left('D', 4)){
    std::cout << "Added Child!!!" << std::endl;
  }
  if(o.add_right('E', 4)){
    std::cout << "Added Child!!" <<std::endl;
  }
  if(o.add_left('F', 2)){
    std::cout << "Added Child!!" << std::endl;
  }
  if(o.add_right('G', 2)){
    std::cout << "Added Child!!!" << std::endl;
  }
  if(o.add_right('E', 1)){
    std::cout << "Added Child!!" << std::endl;
  }
  if(o.add_left('D', 1)){
    std::cout << "Added Child!!!" << std::endl;
  }
  o.print_tree();
  return 0;
}