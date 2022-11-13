#include <bits/stdc++.h>

using namespace std;

pair<int, int> stairCase(int n, int m, vector<vector<int>> arr, int key){
  pair<int,int> ans;
  if(key <arr[0][0] || key>arr[n-1][m-1]){
    return {-1,-1};
  }
  int i=0;
  int j=m-1;

  while(i<=n-1 and j>=0){
    if(arr[i][j] == key){
      return {i,j};
    }else if(arr[i][j]>key){
      j--;
    }else{
      i++;
    }
  }
  return {-1,-1};
}

int main(){
  vector<vector<int>> arr = {{10, 20, 30, 40},
                  {15, 25, 35, 45},
                  {27, 29, 37, 48},
                  {32, 33, 39, 50}};

  pair<int,int> c;
  int n=4,m=4;
  int key=33;
  c = stairCase(n,m,arr, key);
  cout <<"{" << c.first <<","<<c.second<<"}"<<endl;
  return 0;
}
