#include "operation.h"
#include <bits/stdc++.h>

QUEUE::QUEUE(std::vector<int> q)
  :queue{q}{

}

QUEUE::~QUEUE(){
  std::cout << "Destructor Called!!!" << std::endl;
}

bool QUEUE::isFull(){
  if(queue.size() == MAX_NUM and front==0){
    std::cout << "QUEUE is FULL!!" << std::endl;
    return true;
  }
  return false;
}

bool QUEUE::isEmpty(){
  if(front=rear=-1){
    return true;
  }
  return false;
}


void QUEUE::ENQUEUE(int key){
  if(isFull()){
    std::cout << "Queue is FULL!!" << std::endl;
  }
  if(isEmpty()){
    std::cout << "Queue is Empty!!" << std::endl;
    front++;
    rear++;
    queue.push_back(key);
    std::cout << key << " Added Successfully!! " << std::endl;
  }
  else{
    rear++;
    queue.push_back(key);
    std::cout << key << " Added SuccessFully!! " << std::endl;
   }
  }

void QUEUE::DEQUEUE(){
  if(isEmpty()){
    return;
  }
  if(front==rear){
    int removed = queue[front];
    rear--;
    front--;
    std::cout << removed << " deleted from queue!!" << std::endl;
    return;
  }
  int removed = queue[front];
  queue[front] = -1;
  front++;
  std::cout << removed << " deleted from queue!!" << std::endl;
  return;
}

int QUEUE::FRONT(){
  if(isEmpty()){
    return -1;
  }
  return queue[front];
}

int QUEUE::REAR(){
  if(isEmpty()){
    return -1;
  }
  return queue[rear];
}