#include <iostream>
#include <vector>

class peakElement{
  private :
    std::vector<int> arr1;
    int key;
    void swap(int &a, int &b){
      int temp=a;
      a=b;
      b=temp;
    }
    void sort(){
      for(int i=0; i<arr1.size()-1; i++){
        for(int j=0; j<arr1.size()-i-1; j++){
          if(arr1[j] > arr1[j+1]){
            swap(arr1[j], arr1[j+1]);
          }
        }
      }
    }

  public :
    peakElement(std::vector<int> arr)
      :arr1{arr}{}

    ~peakElement(){
      std::cout << "DEstructor Called!" << std::endl;
    }

    int returnPeakElement(){
      sort();
      this->key = arr1[arr1.size()-1];
      for(int i=arr1.size()-1; i>0; i--){
        if(arr1[i]>arr1[i+1] && arr1[i]>arr1[i-1]){
          this->key = arr1[i];
        }
      }
      return this->key;
    }

   void display(){
    for(auto x:arr1){
      std::cout << x << " ";
    }
   }
};

int main(){
  std::vector<int> arr{-1,4,-1,6,6,-1};
  peakElement pk = peakElement(arr);
  std::cout << "Peak Element : " << pk.returnPeakElement() << std::endl;
  
  pk.display();
  return 0;
}