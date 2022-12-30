#include <bits/stdc++.h>
#include "Node.h"
#include "TreeTraversal.h"

int main(){
  {
    Traverse t = Traverse();
    Node* root = t.defineNode(1);
    root->left_child = t.defineNode(2);
    root->right_child = t.defineNode(3);
    root->left_child->left_child = t.defineNode(4);
    root->left_child->right_child = t.defineNode(5);
    t.InorderTraversal(root);
  }
  {
    Traverse t = Traverse();
    Node* root = t.defineNode(1);
    root->left_child = t.defineNode(2);
    root->right_child = t.defineNode(3);
    root->left_child->left_child = t.defineNode(4);
    root->left_child->right_child = t.defineNode(5);
    t.PreorderTraversal(root);
  }
  {
    Traverse t = Traverse();
    Node* root = t.defineNode(1);
    root->left_child = t.defineNode(2);
    root->right_child = t.defineNode(3);
    root->left_child->left_child = t.defineNode(4);
    root->left_child->right_child = t.defineNode(5);
    t.PostorderTRaversal(root);
  }

  return 0;
}