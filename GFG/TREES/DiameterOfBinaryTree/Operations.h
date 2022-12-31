#ifndef _OPERATIONS_H_
#define _OPERATIONS_H_
#include "Node.h"
#include <bits/stdc++.h>

class Operations{
  private :
    int max(int a, int b){
      if(a>b){
        return a;
      }
      return b;
    }
  public :
    Operations();

    ~Operations();

    int height(Node* node);

    int diameter(Node* node);

    Node* newNode(int data);

};

#endif