#ifndef _STACKOPERATION_H_
#define _STACKOPERATION_H_
#include <bits/stdc++.h>

class stackOperation{
  private :
    int MAX_SIZE=21;
    int T=-1;
    std::vector<int> arr;

  public :
    stackOperation(std::vector<int> a);
    ~stackOperation();
    int PUSH(int key);
    bool POP();
    bool isEmpty();
    int TOP();
    int size();
};

#endif