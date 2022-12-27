#ifndef _OPERATION_H_
#define _OPERATION_H_
#include <bits/stdc++.h>

class QUEUE{
  private :
    std::vector<int> queue;
    int MAX_NUM=21;
    int front,rear=-1;
  
  public : 
    QUEUE(std::vector<int> q);
    
    ~QUEUE();

    void ENQUEUE(int key);

    void DEQUEUE();

    int FRONT();

    int REAR();

    bool isEmpty();

    bool isFull();
};
#endif