#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int  main(){
  vector<char> chars {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
  string s;
    int count = 1;
    for(int i=0; i<chars.size(); i++){
        while((i < chars.size()-1) && (chars[i+1] == chars[i])){
            count++;
            i++;
        }
        s += chars[i];
        if(count == 1){
            continue;
        } 
        s += to_string(count);
        count = 1;
    }
    
    cout << s.size();
    if(s.size() > chars.size()){
      for(char i : chars){
        cout << i;
      }
    }else{
      cout << s;
    }

    return 0;
}