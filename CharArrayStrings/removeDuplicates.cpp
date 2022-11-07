#include <bits/stdc++.h>

using namespace std;

int main(){

   string s = "vishal mahotpal";
   bool flag;
    string snew="";
    for(int i=0; i<s.size(); i++){
        flag = false;
        for(int j=i+1; j<s.size(); j++){
            if(s[i] == s[j]){
                flag=true;
                break;
            }
        }
        if(flag == false){
            snew+=s[i];
        }
        
    }
    sort(snew.begin(), snew.end());
    cout << snew;

    return 0;
}