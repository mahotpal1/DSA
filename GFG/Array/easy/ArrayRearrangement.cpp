#include <iostream>
#include <vector>

class ArrayRearrangement{
  private :
    std::vector<int> v;

  public :
    ArrayRearrangement(std::vector<int> vec)
      :v{vec}{
      } 

    ~ArrayRearrangement(){
      std::cout << "Destructor Called!" << std::endl;
    }

    //Rearrange an array such that arr[i] = i
    void reArrange1(){
      for(int i=0; i<v.size(); i++){
        if(v[i] != -1 && v[i] != i){
          int x=v[i];
          while(v[x]!=-1 && v[x]!=x){
            int y = v[x];
            v[x] = x;
            x=y;
          }
          v[x]=x;
          if(v[i] != i){
          v[i] = -1;
        }
        }
      }
    }

    void display(){
      if(v.size() == 0){
        std::cout << "-1" << std::endl;
        return;
      }
      for(auto i:v){
        std::cout << i << " ";
      }
      std::cout << std::endl;
    }

};


int main(){
  ArrayRearrangement ar1 = ArrayRearrangement({6,7,4,5,8,2,3,1});
  ar1.display();
  ar1.reArrange1();
  ar1.display();
  return 0;
}