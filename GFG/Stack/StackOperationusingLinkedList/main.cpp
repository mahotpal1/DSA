#include <bits/stdc++.h>
#include "Node.h"
#include "stackOp.h"

int main(){
  Node* root = new Node();
  STACK o = STACK(root);
  if(o.Empty()){
    std::cout << "Stack is Empty" << std::endl;
  }
  o.push(21);
  o.pop();
  for(int i=1; i<24; i++){
    if(!o.push(i)){
      o.pop();
      o.push(i);
    }
  }
  return 0;
}