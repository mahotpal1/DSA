#include<bits/stdc++.h>

class A{
  private :
    std::vector<int> arr;

  public :
    A(const std::vector<int> a)
      :arr{a}{
    }
    ~A(){
      std::cout << "Calling Destructor ! " << std::endl;
    }
    void reArrange(){
      std::vector<int> temp;
      sort(arr.begin(), arr.end());
      int i=0, j=arr.size()-1;
      while(i<j){
        temp.push_back(arr[i++]);
        temp.push_back(arr[j--]);
      }
      if(arr.size()%2 != 0){
        temp.push_back(arr[i]);
      }
      arr.clear();
      arr=temp;
    }
    void display(){
      for(auto x: arr){
        std::cout << x << ", ";
      }
      std::cout << std::endl;
    }
};

int main(){
  A a = A({1, 2, 3, 5, 4, 6, 7, 9});
  std::cout << "Before : " << std::endl;
  a.display();
  a.reArrange();
  std::cout << "After : " << std::endl;
  a.display();
  return 0;
}