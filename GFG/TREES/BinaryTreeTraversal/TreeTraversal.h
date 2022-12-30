#ifndef _TREE_TRAVERSAL_H_
#define _TREE_TRAVERSAL_H_
#include "Node.h"
#include <bits/stdc++.h>

class Traverse{
  private :
    Node *root;
  public :
    
    Traverse();
    
    ~Traverse();

    Node* defineNode(int data);

    void InorderTraversal(Node* node);

    void PreorderTraversal(Node* node);
    
    void PostorderTRaversal(Node* node);
};
#endif