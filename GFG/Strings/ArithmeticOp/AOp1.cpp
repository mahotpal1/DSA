#include <bits/stdc++.h>

class AP{
  private :
    std::string str1;

  public :
    AP(std::string s)
      :str1{s}{
      }
    ~AP(){
      std::cout << "Destructor Called!" <<std::endl;
    }
    //Smallest number with sum of digits as N and divisible by 10^N
    void ArithemeticOperation1(){
      int N = stoi(str1);
      if(N==0){
        std::cout << "0";
      }
      if(N%9 != 0){
        std::cout << N%9;
      }
      for(int i=1; i<=N/9; ++i){
        std::cout << "9";
      }
      for(int i=0; i<N; i++){
        std::cout << "0";
      }
      std::cout << std::endl;
    }
};

int main(){
  {
    AP a = AP("20");
    a.ArithemeticOperation1();
  }
  {
    AP a = AP("5");
    a.ArithemeticOperation1();
  }

  return 0;
}