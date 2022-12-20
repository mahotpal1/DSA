#include <iostream>

class RP{
  private :
    std::string str;

  public :
    RP(std::string s)
      :str{s}{
      }
    ~RP(){
      std::cout << "Destructor Called!" << std::endl;
    }
    void removePunctuation(){
      for(int i=0; i<str.size(); i++){
        if(ispunct(str[i])){
          str.erase(i--, 1);
        }
      }
    }
    std::string getString(){
      return this->str;
    }
};

int main(){
  {
    std::string s = "Welcome???@@##$ to#$% my%$^ new$%^& World!";
    RP a = RP(s);
    a.removePunctuation();
    std::cout << "After Removing punctuation string is : " <<  a.getString() << std::endl;
  }
  return 0;
}