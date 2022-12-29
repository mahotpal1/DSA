#include <bits/stdc++.h>
#include "Node.h"
#include "TreeTraversal.h"

Traverse::Traverse(){

}

Traverse::~Traverse(){
  std::cout << "Destructor Called!!" <<std::endl;
}

Node* Traverse::defineNode(int data){
      Node* temp = new Node();
      temp->data = data;
      temp->left_child = NULL;
      temp->right_child=NULL;
      std::cout << "Created Node!!" << std::endl;
      return temp; 
}

void Traverse::InorderTraversal(Node* node){
  if(node == NULL){
    return;
  }
  InorderTraversal(node->left_child);
  std::cout << node->data << " ";
  InorderTraversal(node->right_child);
}

void Traverse::PreorderTraversal(Node* node){
  if(node == NULL){
    return;
  }
  std::cout << node->data << " ";
  PreorderTraversal(node->left_child);
  PreorderTraversal(node->right_child);
}

void Traverse::PostorderTRaversal(Node* node){
  if(node == NULL){
    return;
  }
  PostorderTRaversal(node->left_child);
  PostorderTRaversal(node->right_child);
  std::cout << node->data << " ";
}