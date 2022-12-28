#include <bits/stdc++.h>
#include "operation.h"

Operation::Operation(){
};

Operation::~Operation(){
  std::cout << "Destructor Called!!" <<std::endl;
}

bool Operation::isEmpty(){
  if(getSize() == 0){
     return true;
  }
  return false;
}


bool Operation::isFull(){
  if(getSize() == 21){
    return true;
  }
  return false;
}

int Operation::getSize(){
  if(front==NULL){
    return 0;
  }
  int count =0;
  Node* temp = front;
  while(temp != rear){
    count++;
    temp = temp->ele;
  }
  return count;
}

void Operation::enqueue(Node* element){
  if(isFull()){
    std::cout << "Queue is Full!!" << std::endl;
    return;
  }
  if(front == NULL && rear == NULL){
    front->ele=element;
    rear->ele=element;
    rear = element;
  }
  rear->ele = element;
  rear = element;
}


