#include <bits/stdc++.h>

class RotateKReverse{
  private :
    std::vector<int> arr;

    void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
    }

    void rev(int start, int end){
      while(start<end){
        swap(&arr[start], &arr[end]);
        start++;
        end--;
      }
    }

  public :
    RotateKReverse(std::vector<int> a)
      :arr{a}{

      }
    ~RotateKReverse(){
      std::cout << "Destructor Called !" << std::endl; 
    }
    void rotateKtimes(int k){
      rev(0, k-1);
      rev(k, arr.size()-1);
      rev(0, arr.size()-1);
    }
    void display(){
      for(auto x:arr){
        std::cout << x << " ";
      }
      std::cout << std::endl;
    }
};


int main(){
  std::vector<int> arr{1,4,2,7,8,9,10};
  RotateKReverse k = RotateKReverse(arr);
  std::cout << "Before Rotation Array : " << std::endl;
  k.display();
  std::cout << "After Rotating 2 times : " << std::endl;
  k.rotateKtimes(2);
  k.display();
  
  return 0;
}