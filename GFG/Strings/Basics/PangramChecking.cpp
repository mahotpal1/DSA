#include <bits/stdc++.h>

class PangramChecking{
  private :
    std::string s;

  public :
    PangramChecking(std::string str)
      :s{str}{

      } 
    ~PangramChecking(){
      std::cout << "Destructor Called!" <<std::endl;
    }
    bool Checking(){
      int arr[26] {0};
      std::string n;
      for(auto x:s){
        n+=tolower(x);
      }
      for(int i=0; i<n.size(); i++){
        if(n[i]>= 'a' && n[i] <= 'z'){
          arr[n[i]-'a']++;
        }
      }
      for(auto x:arr){
        if(x==0){
          return false;
        }
      }
      return true;
    }

    std::vector<int> makeStringPanagram(){
      std::string n;
      for(auto x:s){
        n+=tolower(x);
      }
      int arr[26] {0};
      for(int i=0; i<s.size(); i++){
         if(n[i]>='a' && n[i]<='z'){
          arr[n[i]-'a']++;
         }
      }
      std::vector<int> vec;
      for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        if(arr[i]==0){
          vec.push_back(i);
        }
      }
      return vec;
    }
};

int main(){
  {
    std::string str = "abcdefghijklmnopqrstuvwxyz";
    PangramChecking p = PangramChecking(str);
    if(p.Checking()){
      std::cout << str << " is a Panagram String." << std::endl;
    }else{
      std::cout << str << " is not a Panagram String." << std::endl;
    }
  }
  {
    std::string str = "abdefghijkmnpqrstuvwxyz";

    PangramChecking p = PangramChecking(str);
    std::cout << "Strings required to convert to Panagram is : " << std::endl;
    for(auto x:p.makeStringPanagram()){
      std::cout << char(x+'a') << " ";
    }
    std::cout << std::endl;
  }


  return 0;
}