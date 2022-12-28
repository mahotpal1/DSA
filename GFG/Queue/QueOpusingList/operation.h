#ifndef _OPERATION_H_
#define _OPERATION_H_
#include "Node.h"

#include <bits/stdc++.h>

class Operation{
  private :
    Node* rear=NULL;
    Node* front=NULL;

  public :
    Operation();
    ~Operation();
    void enqueue(Node* ele);
    void dequeue();
    bool isEmpty();
    bool isFull();
    int getSize();
};
#endif