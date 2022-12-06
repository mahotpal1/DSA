#include <iostream>
#include <Vector>

class Operations{
  private :
    std::vector<int> v;
    void swap(int a, int b){
      int temp = a;
      a = b;
      b = a;
    }
  public :
    Operations(std::vector<int> vec)
      :v{vec}{
    }
    ~Operations(){
      std::cout << "Called Destructor! " << std::endl;
    }
    void Traversal() const{
      std::cout << "Array Traversal Start : " << std::endl;
      for(auto x:v){
        std::cout << x << " ";
      }
      std::cout << std::endl;
      std::cout << "Array Traversal End !" <<std::endl;
    }
    void Insertion(int x){
      v.push_back(x);
    }
    bool Deletion(int x){
      bool flag = false;
      for(auto i=this->v.begin(); i!=v.end(); i++){
        if(*i == x){
          this->v.erase(i);
          flag=true;
        }
      }
      return flag;
    }
    bool Searching(int x){
      for(auto i=v.begin(); i<v.end(); i++){
        if(*i == x){
          return true;
        }
      }
      return false;
    }
    
    void sorting(){
      for(auto i=0; i<v.size()-1; i++){
        for(auto j=0; j<v.size()-i-1; j++){
          if(v[j] > v[j+1]){
            swap(v[j],v[j+1]);
          }
        }
      }
    }
};

int main(){
  std::vector<int> v = {4,5,2};
  Operations op1 = Operations(v);
  op1.Traversal();
  op1.Insertion(9);
  op1.Deletion(4);
  if(op1.Searching(5)){
    std::cout << "Found!" << std::endl;
  }else{
    std::cout << "Not Found" << std::endl;
  }
  op1.Traversal();
  op1.sorting();
  op1.Traversal();
  return 0;
}