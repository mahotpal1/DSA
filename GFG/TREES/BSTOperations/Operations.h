#ifndef _OPERATIONS_H_
#define _OPERATIONS_H_
#include "Node.h"
#include "bits/stdc++.h"

class Operations{
  private :
    Node* root;

  public :
    Operations(Node* root);

    
    ~Operations();

    Node* Insert(Node* node, int key);

    void InsertNew(int key);
    
    void searchNew(int key);

    Node* Search(Node* node, int key);

    Node* createNode(int key);
};
#endif