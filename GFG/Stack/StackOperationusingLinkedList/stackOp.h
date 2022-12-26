#ifndef _STACK_OP_
#define _STACK_OP_
#include "Node.h"

class STACK{
  private :
    Node* root;

  public :
    STACK(Node* r);
    
    ~STACK();

    bool push(int key);

    void pop();

    int getSize();

    bool Empty();
};

#endif