#include <bits/stdc++.h>
#include "Node.h"
#include "Operations.h"

Operations::Operations(){
}

Operations::~Operations(){
  std::cout << "Destructor Called!!" << std::endl;
}

Node* Operations::newData(int key){
  Node* node = new Node();
  node->left = NULL;
  node->right = NULL;
  node->data = key;
  std::cout << "Node Created!!" << std::endl;
  return node;
}

void Operations::deleteDeepest(Node* root, Node* d_node){
  std::queue<Node*> q;
  q.push(root);
  Node* temp;
  while (!q.empty())
  {
    temp = q.front();
    q.pop();
    if(temp == d_node){
      temp = NULL;
      delete(d_node);
      return;
    }
    if(temp->right){
      if(temp->right == d_node){
        temp->right == NULL;
        delete(d_node);
        return;
      }else{
        q.push(temp->right);
      }
    }
    if(temp->left){
      if(temp->left == d_node){
        temp->left = NULL;
        delete(d_node);
        return;
      }else{
        q.push(temp->left);
      }
    }
  }
}

Node* Operations::deletion(Node* root, int key){
  if(root == NULL){
    return NULL;
  }

  if(root->left == NULL && root->right == NULL){
    if(root->data == key){
      return NULL;
    }else{
      return root;
    }
  }

  std::queue<Node*> q;
  q.push(root);
 
  Node* temp;
  Node* key_node = NULL;
 
  while(!q.empty()){
    temp = q.front();
    q.pop();

    if(temp->data == key){
      key_node = temp;
    }

    if(temp->left){
      q.push(temp->left);
    }  
    if(temp->right){
      q.push(temp->right);
    }
  } 
  if(key_node != NULL){
    int x = temp->data;
    deleteDeepest(root, temp);
    key_node->data = x;
  }
  return root;
}

bool Operations::ifNodeExists(Node* temp, int key){
  Node* node = new Node();
  node = temp;
  if(node == NULL){
    return false;
  }
  if(node->data == key){
    return true;
  }

  bool res1 = ifNodeExists(node->left, key);
  if(res1){
    return true;
  }
  bool res2 = ifNodeExists(node->right, key);

  return res2;
}

int Operations::maxDepth(Node* node){
      if(node == NULL){
        return 0;
      }else{
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
      
      if(lDepth>rDepth)
        return lDepth+1;
      else
        return rDepth+1;
      }
}

int Operations::getLevel(Node* node, int data){
  return getLevelUtil(node, data, 1);
}