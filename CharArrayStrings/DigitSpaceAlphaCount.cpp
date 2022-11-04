#include <iostream>
#include <cstring>

using namespace std;

int main(){
  int Char_count=0;
  int space_count=0;
  int num_count = 0;
  cout << "Pass parameters : ";
  char a = cin.get();

  while(a != '\n'){
    if((a>='a' && a<='z') || (a>='A' && a<='Z')){
      Char_count++;
    }else if(a>='0' && a<='9'){
      num_count++;
    }else if(a=='\t' || a==' '){
      space_count++;
    }
    a = cin.get();
  }

  cout << "Total count of characters : " << Char_count << endl;
  cout << "Total count of Numbers : " << num_count << endl;
  cout << "Total count of space : " << space_count << endl;

  return 0;
}