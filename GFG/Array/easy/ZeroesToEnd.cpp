#include <iostream>
#include <vector>

using namespace std;

class EndZero{
  private :
    std::vector<int> arr;
    void swap(int &a, int &b){
      int temp;
      temp = a;
      a=b;
      b=temp;
    }

  public :
    EndZero(std::vector<int> a)
      :arr{a}{
    }
    ~EndZero(){
      std::cout << "Destructor Called! " << std::endl;
    }
    void push_zero_to_end(){
      int j=0;
      for(int i=0; i<arr.size(); i++){
        if(arr[i]!=0){
          swap(arr[i], arr[j]);
          j++;
        }
      }
    }
    void print_array(){
      for(auto x: arr){
        std::cout << x << ", ";
      }
      std::cout << std::endl;
    }
};


int main(){
  EndZero a = EndZero({2,4,0,6,7,9,0,0,0,3,5});
  std::cout << "Array Elements Before : " << std::endl;
  a.print_array();
  a.push_zero_to_end();
  std::cout << "Array Elements After : " << std::endl;
  a.print_array();

  return 0;
}