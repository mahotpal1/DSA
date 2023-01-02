#include <bits/stdc++.h>
#include "Node.h"
#include "Operations.h"

Operations::Operations(Node* node)
  :root{node}{

  }

Operations::~Operations(){
  std::cout << "Destructor Called!!" << std::endl;
}

Node* Operations::createNode(int key){
      Node* temp = new Node();
      temp->key = key;
      temp->left = NULL;
      temp->right = NULL;
      return temp; 
    }

Node* Operations::Insert(Node* node, int key){
  if(node == NULL){
    return createNode(key);
  }else if(key < node->key){
    node->left = Insert(node->left, key);
  }else if(key > node->key){
    node->right = Insert(node->right, key);
  }
  return node;
}

void Operations::InsertNew(int key){
  Node* temp = root;
  if(root == NULL){
    root = Insert(temp, key);
    std::cout << "Inserted!!" << std::endl;
    return;
  }else{
    Insert(temp, key);
    std::cout << "Inserted!!" << std::endl;
    return;
  }
}

Node* Operations::Search(Node* node, int key){
  if(node == NULL || node->key == key){
    std::cout << "Found!!!" << std::endl;
    return node;
  }
  if(node->key < key){
    return Search(node->right, key);
  }
  return Search(node->left, key);
}

void Operations::searchNew(int key){
  Node* temp = root;
  std::cout << Search(temp, key)->key << std::endl;
}