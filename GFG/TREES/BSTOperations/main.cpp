#include <bits/stdc++.h>
#include "Node.h"
#include "Operations.h"

int main(){
  Node* root = NULL;
  Operations o = Operations(root);
  o.InsertNew(1);
  o.InsertNew(2);
  o.InsertNew(3);
  o.InsertNew(4);
  o.InsertNew(5);
  o.InsertNew(6);
  o.searchNew(4);
  return 0;
}