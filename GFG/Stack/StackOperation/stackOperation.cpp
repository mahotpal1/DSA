#include "stackOperation.h"
#include <bits/stdc++.h>

stackOperation::stackOperation(std::vector<int> a)
  :arr{a}{

  }

stackOperation::~stackOperation(){
  std::cout << "Destructor Called!!" <<std::endl;
}

bool stackOperation::isEmpty(){
  if(T == -1){
    return true;
  }else{
    return false;
  }
}

int stackOperation::TOP(){
  if(isEmpty()){
    std::cout << "Stack is Empty!" << std::endl; 
    return 0;
  }else{
    return arr[T];
  }
}

int stackOperation::size(){
  return arr.size();
}

bool stackOperation::POP(){
  if(isEmpty()){
    std::cout << "Stack is Empty!" << std::endl;
    return false;
  }else{
    arr.pop_back();
    return true;
  }
}

int stackOperation::PUSH(int key){
  if(T == MAX_SIZE){
    std::cout << "Space is Full!! Overflow!" << std::endl;
    return EXIT_FAILURE;
  }else{
    arr.push_back(key);
    std::cout <<key << " added Successfully in Stack!" << std::endl;
    return EXIT_SUCCESS;
  }
}