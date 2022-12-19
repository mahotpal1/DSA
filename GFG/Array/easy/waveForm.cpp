#include <bits/stdc++.h>

class Wave{
  private :
    std::vector<int> arr,temp;
    void swap(int *a, int *b){
      int temp =*a;
      *a = *b;
      *b = temp;
    }
    void sort(){
      for(int i=0; i<arr.size()-1; i++){
        for(int j=0; j<arr.size()-1-i; j++){
          if(arr[j]>arr[j+1]){
            swap(&arr[j], &arr[j+1]);
          }
        }
      }
    }

  public :
    Wave(std::vector<int> a)
      :arr{a},temp{a}{

      } 
    ~Wave(){
      std::cout << "Destructor Called!" << std::endl;
    } 
    void waveFormSorting(){
      arr=temp;
      sort();
      for(int i=0; i<arr.size()-1; i+=2){
        swap(&arr[i], &arr[i+1]);
      }
      std::cout << std::endl;
    }
    void waveFormC(){
      arr=temp;
      for(int i=0; i<arr.size(); i+=2){
        if (i>0 && arr[i-1] > arr[i] )
            swap(&arr[i], &arr[i-1]);
        if (i<arr.size()-1 && arr[i] < arr[i+1] )
            swap(&arr[i], &arr[i + 1]);
      }
    }
    void display(){
      for(auto x:arr){
        std::cout << x << " ";
      }
      std::cout << std::endl;
    }
};


int main(){
  std::vector<int> arr{3,2,6,7,4,8,9,};

  Wave v = Wave(arr);
  std::cout << "Current : " << std::endl;
  v.display();
  std::cout << "Wave Form  using sorting : " << std::endl;
  v.waveFormSorting();
  v.display();
  std::cout << "Current : " << std::endl;
  v.display();
  std::cout << "Wave Form  using Minimal Approach : " << std::endl;
  v.waveFormC();
  v.display();
  return 0;
}