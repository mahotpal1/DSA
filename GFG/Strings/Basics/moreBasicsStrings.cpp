#include <iostream>

class SP{
  private :
    std::string str;

  public :
    SP(std::string s)
      :str{s}{
      }     
    ~SP(){
      std::cout << "Destructor Called!!" << std::endl;
    }

    bool checkDigit(){
      int i=0;
      for(i=0; i<str.size(); i++){
        if(isdigit(str[i])){
          continue;
        }else{
          return false;
        }
      }
      return true;
    }

    bool checkAllCharsSame(){
      char a = str[0];
      for(int i=1; i<str.size(); i++){
        if(a==str[i]){
          continue;
        }else{
          return false;
        }
      }
      return true;
    }
};

int main(){
  {
    SP n = SP("2222222");
    if(n.checkDigit()){
      std::cout << "IS a Number!" << std::endl;
    }else{
      std::cout << "Is a String!" << std::endl;
    }
  }
  {
    SP n = SP("2222222");
    if(n.checkAllCharsSame()){
      std::cout << "Yes!" << std::endl;
    }else{
      std::cout << "No!" << std::endl;
    }
  }
  return 0;
}