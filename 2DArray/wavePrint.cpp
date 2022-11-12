#include <bits/stdc++.h>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
   bool flag = true;
   vector<int> a;
   for(int i=n-1; i>=0; i--){
       if(flag == true){
           for(int j=0; j<m; j++){
               a.push_back(arr[j][i]);
           }
       }else{
           for(int j=m-1; j>=0; j--){
               a.push_back(arr[j][i]);
           }
       }
       if(flag == true){
           flag = false;
       }else{
           flag = true;
       }
   }
   return a;
}

int main(){
  vector<vector<int>> arr {{1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12},
                           {13, 14, 15, 16}};

  vector<int> a;
  a = WavePrint(4,4,arr);    
  for(int i=0; i<a.size(); i++){
    cout << a[i] << ",";
  }
  return 0;
}