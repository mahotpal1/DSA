#include "Node.h"
#include "Operations.h"
#include <bits/stdc++.h>

Operations::Operations(){

}

Operations::~Operations(){
  std::cout << "Destructor Called!!" << std::endl;
}

Node* Operations::newNode(int data){
  Node* n = new Node();
  n->data = data;
  n->left = NULL;
  n->right = NULL;
  return n;
}

int Operations::height(Node* node){
  if(node == NULL){
    return 0;
  }
  return 1+ max(height(node->left), height(node->right));
}

int Operations::diameter(Node* node){
  if(node == NULL){
    return 0;
  }
  //get height, diameter of left and right subtree.

  int lheight = height(node->left);
  int rheight = height(node->right);

  int ldiameter = diameter(node->left);
  int rdiameter = diameter(node->right);

  return max(lheight+rheight+1, max(ldiameter, rdiameter));
}