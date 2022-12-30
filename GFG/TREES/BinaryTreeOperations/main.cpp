#include <bits/stdc++.h>
#include "Node.h"
#include "Operations.h"

int main(){
  Node* root;
  Operations op = Operations();
  root = op.newData(1);
  root->left = op.newData(2);
  root->right = op.newData(3);
  root->left->left = op.newData(4);
  root->left->right = op.newData(5);
  root->right->left = op.newData(6);
  root->right->right = op.newData(7);
  if(op.ifNodeExists(root, 3)){
    std::cout << "Yes, Node exists in the tree" << std::endl;
  }else{
    std::cout << "No, Node doesn't exist in the Tree" << std::endl;
  }

  op.deletion(root, 3);

  std::cout << "Deleted Node : 3" << std::endl;

  if(op.ifNodeExists(root, 3)){
    std::cout << "Node Exist!" << std::endl;
  }else{
    std::cout << "Node doesn't Exist!!, Maybe Deleted!!" << std::endl;
  }
  
  //Auxillary Operations :
  std::cout << "Height of Tree : " << op.maxDepth(root) << std::endl;
  
  std::cout << "Level of Element 2 is : " << op.getLevel(root, 2) << std::endl;

  std::cout << "Size of Tree : " << op.sizeOfTree(root) << std::endl;

  return 0; 
}
