#include <bits/stdc++.h>
#include "Node.h"
#include "Operation.h"

int main(){
  Operation o = Operation();
  Node* n = new Node();
  n->ele = NULL;
  n->data = 23;
  o.enqueue(n);
  return 0;
}