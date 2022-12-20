#include<bits/stdc++.h>

class PL{
  private :
    std::string str;

  public :
    PL(std::string s)
      :str{s}{

      }
    ~PL(){
      std::cout << "Destructor Called!" << std::endl;
    }
    void panagramaticLipogram(){
      int arr[26] {0};
      std::string n;
      for(int i=0; i<str.size(); i++){
        n += tolower(str[i]);
      }
      for(int i=0; i<str.size(); i++){
        if(str[i]>='a' && str[i]<='z'){
          arr[str[i]-'a']++;
        }
      }
      int count =0;
      for(auto x:arr){
        if(x==0){
          count++;
        }
      }
      if(count==0){
        std::cout << "String is a Panagram" << std::endl;
      }else if(count ==1){
        std::cout << "String is a Panagramatic Lipogram" << std::endl;
      }else{
        std::cout << "String is a Lipogram" << std::endl;
      }

    }

};


int main(){

  {
   std::string str = "abcdefghijklmnopqrstuvwxyz";
    PL p = PL(str);
    p.panagramaticLipogram();
  }
  {
    std::string str = "abcdefghijklmnpqrstuvwxyz";
    PL p = PL(str);
    p.panagramaticLipogram();
  }
  {
    std::string str = "abfghijklmnpqrstuvwxyz";
    PL p = PL(str);
    p.panagramaticLipogram();
  }
  return 0;
}