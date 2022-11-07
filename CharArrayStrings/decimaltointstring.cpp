#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cout << "Enter a decimal value : \n";
  cin >> s;
  int sum = 0;
    int n=1;
    for(int i=s.length()-1; i>=0; i--){
        if(s[i] == '1'){
            sum += n;
        } 

        n *= 2;
    }
    cout << sum;
  return 0;
}