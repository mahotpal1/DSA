#include <bits/stdc++.h>
#include "Node.h"
#include "Operations.h"

int main(){
  Node* root = new Node();
  Operations o = Operations();
  root = o.newNode(1);
  root->left = o.newNode(2);
  root->right = o.newNode(3);
  root->left->left = o.newNode(4);
  root->left->right = o.newNode(5);

  std::cout << "Diameter of the tree is : " << o.diameter(root) << std::endl;
  
  return 0;
}