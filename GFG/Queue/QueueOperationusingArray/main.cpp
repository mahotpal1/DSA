#include <bits/stdc++.h>
#include "operation.h"

int main(){

  QUEUE q = QUEUE({});
  q.FRONT();
  q.REAR();
  q.ENQUEUE(12);
  std::cout << "check 3" << std::endl;
  q.DEQUEUE();
  for(int i=1; i<23; i++){
    q.ENQUEUE(i);
  }
  q.DEQUEUE();
  return 0;
}