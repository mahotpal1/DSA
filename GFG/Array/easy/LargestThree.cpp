#include <bits/stdc++.h>

class LargestThree{
  private :
    std::vector<int> arr;
    void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = *a;
    }
    void sort(){
      for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size()-i-1; j++){
          if(arr[j]>arr[j+1]){
            swap(&arr[j], &arr[j+1]);
          }
        }
      }
    }

  public :
    LargestThree(std::vector<int> a)
      :arr{a}{

      }
    ~LargestThree(){
      std::cout << "DEstructor Called! " << std::endl;     
    }
    std::vector<int> result(){
      sort();
      int size = arr.size()-1;
      return {arr[size], arr[size-1], arr[size-2]};
    }
    void display(){
      for(auto x:arr){
        std::cout << x << " ";
      }
      std::cout << std::endl;
    }
};

int main(){
  {
    std::vector<int> arr{2,1,4,5,6,23,56};
    LargestThree l = LargestThree(arr);
    std::cout << "Array Elements : " << std::endl;
    l.display();
    std::cout << "The Largest Three Numbers in array are : " << std::endl;
    for(auto x:l.result()){
      std::cout << x << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}