#include <iostream>
#include <vector>

class ReverseArray{
  private :
    std::vector<int> v;
    void swap(int &a, int &b){
      int temp = a;
      a=b;
      b=temp;
    }

  public :
    ReverseArray(std::vector<int> vec)
      :v{vec}{
      }
    
    ~ReverseArray(){}

    void reverse(){
      int start=0;
      int end=v.size()-1;
      while(start <= end){
        swap(v[start], v[end]);
        start++;
        end--;
      }
    }

    void display(){
      std::cout << "Array Elements : " << std::endl;
      std::cout << "[ ";
      for(auto x:this->v){
        std::cout << x << " ";
      }
      std::cout << "]" << std::endl;
    } 
};

int main(){
  std::vector<int> v1={4,3,6,7,8};
  ReverseArray ra1 = ReverseArray(v1);
  ra1.display();
  ra1.reverse();
  std::cout << "After Reverse, " <<;
  ra1.display();
}