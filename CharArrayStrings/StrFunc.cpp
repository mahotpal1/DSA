#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char a[1000] = "Hello There!";
  char b[1000];

  int lenA = strlen(a);
  cout << lenA << endl;

  strcpy(b,a);
  cout <<"Copied? " << b << endl;

  int res = strcmp(a,b);
  cout << res << endl;

  strcat(a, " Where are you?");
  cout << a << endl;

  res = strcmp(a,b);
  cout << res << endl;
  return 0;
}