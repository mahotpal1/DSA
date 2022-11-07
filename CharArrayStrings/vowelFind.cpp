#include <bits/stdc++.h>

using namespace std;

int main(){
  string S = "aeoibsddaeioudb";
  string s = "aeiou";
    string snew = "";
    for(int i=0; i<S.size(); i++){
        for(int j=0; j<s.size(); j++){
            if(S[i] == s[j]){
                snew += S[i];
                break;
            }
        }
    }
    cout << snew;

    return 0;
}