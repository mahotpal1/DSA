#include <bits/stdc++.h>

class KthSmallestLargest{
  private :
    std::vector<int> arr;
    void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
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
      KthSmallestLargest(std::vector<int> a)
        :arr{a}{

        }
      ~KthSmallestLargest(){
        std::cout << "Destructor Called! " << std::endl;
      }
      int KthSmallest(int k){
        sort();
        return arr[k-1];
      }
      int KthLargest(int k){
        sort();
        return arr[arr.size()-k];
      }
      void printArray(){
        for(auto x:arr){
          std::cout << x << " ";
        }
        std::cout << std::endl;
      }
};

int main(){
  {
    std::vector<int> arr{3,5,4,6,1,2};
    KthSmallestLargest k = KthSmallestLargest(arr);
    
    std::cout << "3rd Largest is : " << k.KthLargest(3) << std::endl;
    std::cout << "3rd Smallest is : " << k.KthSmallest(3) << std::endl;
    std::cout << "Array Elements : " << std::endl;
    k.printArray();
  }

  return 0;
}