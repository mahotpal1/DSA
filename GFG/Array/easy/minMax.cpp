#include <iostream>
#include <vector>

class minMax{
  private :
    std::vector<int> arr;
    int min=INT_MAX;
    int max=INT_MIN;

  public :
    minMax(std::vector<int> a)
      :arr{a}{

      }

    ~minMax(){
      std::cout << "Destructor Called!" << std::endl;
    }

    void store(){
      for(int i=0; i<arr.size(); i++){
        if(arr[i]>max){
          this->max = arr[i];
        }
        if(arr[i]<min){
          this->min = arr[i];
        }
      }
    }
    
    int getMax(){
      return this->max;
    }

    int getMin(){
      return this->min;
    }

};


int main(){
  std::vector<int> arr{4,-34,67,89,123,9,8};

  minMax m = minMax(arr);
  m.store();
  if(m.getMax()==INT_MIN){
    std::cout << "Invalid Array!" << std::endl;
  }else{
    std::cout << "Maximum element in array : " << m.getMax() << std::endl;
  }
  if(m.getMax() == INT_MAX){
    std::cout << "Invalid Array!" << std::endl;
  }else{
    std::cout << "Minimum element in array : " << m.getMin() << std::endl;
  }

  return 0;
}