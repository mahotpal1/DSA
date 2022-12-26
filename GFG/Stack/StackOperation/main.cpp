#include <bits/stdc++.h>
#include "stackOperation.h"

int main(){
  {
    //Passing empty string.
    stackOperation o = stackOperation({});
    std::cout << "Performing Stack Operation!" << std::endl;
    o.POP();
    o.size();
    o.PUSH(45);
    o.POP();
    for(int i=2; i<25; i++){
      o.PUSH(i);
    }
    o.POP();
  }
  return EXIT_SUCCESS;
}