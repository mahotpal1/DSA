#include <bits/stdc++.h>
#include "stackOp.h"
#include "Node.h"

STACK::STACK(Node* r)
  :root{r}{

  }

STACK::~STACK(){
  std::cout << "Destructor Called!!" << std::endl;
}

int STACK::getSize(){
  if(root == NULL){
    return 0;
  }else{
    Node* temp = new Node();
    temp = root;
    int count = 0;
    while(temp != NULL){
      count ++;
      temp = temp->next;
    }
    free(temp);
    return count;
  }
}

bool STACK::Empty(){
  if(root == NULL){
    return true;
  }
  return false;
}

bool STACK::push(int key){
  if(getSize() == 22){
    std::cout << "Overflow! stack is FULL!" << std::endl;
    return false;
  }
  Node* n = new Node();
  n->data = key;
  n->next = root;
  root = n;
  std::cout << key << " added in the stack !" << std::endl;
  return true;
}

void STACK::pop(){
  if(Empty()){
    std::cout << "Underflow! Stack is empty" << std::endl;
    return;
  }
  Node* temp = root;
  int key = root->data;
  std::cout << key << " is poped out!" << std::endl;
  root = root->next;
  free(temp);
}
