#ifndef _OPERATIONS_H_
#define _OPERATIONS_H_
#include <bits/stdc++.h>
#include "Node.h"
class Operations{
  private :
    int getLevelUtil(Node* temp, int data, int level){
     Node* node = new Node();
     node = temp;
     if(node == NULL){
      return 0;
     }
     if(node->data == data){
      return level;
     }
     int downLevel = getLevelUtil(node->left, data, level+1);
     if(downLevel != 0)
       return downLevel;

     downLevel = getLevelUtil(node->right, data, level+1);
     return downLevel; 
    }
  public :
    Operations();
    ~Operations();
    Node* newData(int key);
    void deleteDeepest(Node* root, Node* d_node);
    Node* deletion(Node* root, int key);
    bool ifNodeExists(Node* node, int key);

    //Auxillary Operations :
    // Height of a tree
    int maxDepth(Node* node);

    int getLevel(Node* node, int data);

    int sizeOfTree(Node* root){
      if(root == NULL){
        return 0;
      }
      std::queue<Node*> q;
      int count = 0;
      q.push(root);
      while(!q.empty()){
        Node* temp = q.front();
        if(temp->left){
          q.push(temp->left);
          count++;
        }
        if(temp->right){
          q.push(temp->right);
          count++;
        }
        q.pop();
      }
      return count;
    }
};
#endif