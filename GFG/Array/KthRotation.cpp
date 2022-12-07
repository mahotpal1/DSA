#include <iostream>
#include <vector>

class KthRotation{
  private :
    std::vector<int> v;
    void reverseArray(int start, int end){
      int temp;
      while(start<=end){
        temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
      }
    }
  
  public : 
    KthRotation(std::vector<int> vec)
      :v{vec}{
      }

    ~KthRotation(){
      std::cout << "Destructor Called! " << std::endl;
    }
    
    void rotateOneByOneLeft(int k){
      int temp;
      if(k>v.size()){
        k=k%v.size();
      }
      while(k>0){
        temp=v[0];
        for(int i=0; i<v.size()-1; i++){
          v[i]=v[i+1];
        }
        v[v.size()-1] = temp;
        k--;
      }
    }

    void rotateOneByOneRight(int k){
      int temp;
      if(k>v.size()){
        k=k%v.size();
      }
      while(k>0){
        temp = v[v.size()-1];
        for(int i=v.size()-1; i>0; i--){
          v[i] = v[i-1];
        }
        v[0] = temp;
        k--;
      }
    }

    //reverse 1) first k blocks
    //2)reverse 2nd block k to nth
    //3)reverse whole array to get the kth rotated array left
    void usingJugglingAlgoLeftShift(int k){
      if(k>v.size()){
        k %= v.size(); 
      }
      reverseArray(0,k-1);
      reverseArray(k,v.size()-1);
      reverseArray(0,v.size()-1);
    }
    void usingJugglingAlgorithmRightShift(int k){
      if(k>v.size()){
        k %= v.size();
      }
      reverseArray(v.size()-k, v.size()-1);
      reverseArray(0,v.size()-k-1);
      reverseArray(0,v.size()-1);
    }

    void printArray(){
      std::cout << "[ ";
      for(int i=0; i<v.size(); i++){
        std::cout << v[i] << " ";
      }
      std::cout << "]" << std::endl;
    }

};

int main(){
  KthRotation k1 = KthRotation({1, 2, 3, 4, 5, 6});
  std::cout << "Original Array : " << std::endl;
  k1.printArray();
  std::cout << "Array after left shift using rotateone : " << std::endl;
  k1.rotateOneByOneLeft(2);
  k1.printArray(); 
  std::cout << "Array after right shift using rotateone : " << std::endl;
  k1.rotateOneByOneRight(2);
  k1.printArray();
  std::cout << "Array after left shift using jugglingleft : " << std::endl;
  k1.usingJugglingAlgoLeftShift(2);
  k1.printArray(); 
  std::cout << "Array after right shift using jugglingRight : " << std::endl;
  k1.usingJugglingAlgorithmRightShift(2);
  k1.printArray();
}