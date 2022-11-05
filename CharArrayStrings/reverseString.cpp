#include <iostream>
#include <cstring>

using namespace std;

int main(){

  char line[100];
  cout << "Enter a string : ";
  cin.getline(line, 100, '\n');

  int i=0;
  bool flag = true;
  int n = strlen(line);
  while(line[i] != '\0')
  {
    if(line[i] != line[n-i-1]){
      flag = false;
      break;
    }
    i++;
  }
  cout << "Is Palindrome ? " << (flag ? "Yes" : "No") << endl;
  return 0;
}