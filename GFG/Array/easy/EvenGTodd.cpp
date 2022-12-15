#include <bits/stdc++.h>

class Main{
  private : 
    std::vector<int> arr;
    void swap(int* a, int* b){
      int temp;
      temp = *a;
      *a=*b;
      *b=temp;
    }

  public : 
    Main(std::vector<int> a)
      :arr{a}{
    }
    ~Main(){
      std::cout << "Destructor Called" << std::endl;
    }
    void Arrange(){
      for(int i=1; i<arr.size(); i++){
        if(i%2==0){
          if(arr[i]>arr[i-1]){
            swap(&arr[i], &arr[i-1]);
          }
        }
        else{
          if(arr[i]<arr[i-1]){
            swap(&arr[i], &arr[i-1]);
          }
        }
      }
    }
    void display(){
      for(auto x: arr){
        std::cout << x << ", ";
      }
      std::cout << std::endl;
    }
};

int main(){
  Main a = Main({1, 2, 2, 1});
  std::cout << "Before : " << std::endl;
  a.display();
  a.Arrange();
  std::cout << "After : " << std::endl;
  a.display();
}