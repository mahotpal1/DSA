#include <bits/stdc++.h>

class Lomutos{
  private :
    std::vector<int> arr;
    void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
    }
 
  public :
    Lomutos(std::vector<int> a)
      :arr{a}{
    }
    ~Lomutos(){
      std::cout << "Destructor Called!" << std::endl;
    }
    void segregate(){
      int j=0;
      for(int i=0; i<arr.size(); i++){
        if(arr[i]%2 == 0){
          swap(&arr[i], &arr[j]);
          j++;
        }
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
  {
    Lomutos a = Lomutos({1,2,6,4,9,67,5});
    std::cout << "Before : " << std::endl;
    a.display();
    a.segregate();
    std::cout << "After : Segregated Array(even/odd)" << std::endl;
    a.display();

    return 0;
  }

}