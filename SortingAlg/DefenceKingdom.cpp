#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int defenceKingdom(int W, int H, vector<pair<int,int>> position){
  /*
  vector<int> x;
  vector<int> y;
  for(int i=0; i<position.size(); i++){
    x.push_back(position[i].first);
    y.push_back(position[i].second);
  }
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  int x1=-1;
  int y1=-1;
  for(int i=0; i<x.size()-1; i++){
    x1 = max(x1, x[i+1]-x[i]);
    y1 = max(y1, y[i+1]-y[i]);
  }
  return (x1-1)*(y1-1);
  */
  vector<ll> x;
  vector<ll> y;
  x.push_back(0); y.push_back(0);
  for(int i=0; i<position.size(); i++){
    x.push_back(position[i].first);
    y.push_back(position[i].second);
  }
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  ll x1=INT_MIN;
  ll y1=INT_MIN;
  for(ll i=1; i<x.size(); i++){
    x1 = max(x1, x[i]-x[i-1]-1);
  }
  for(ll j=1; j< y.size(); j++){
    y1 = max(y1, y[j]-y[j-1]-1);
  }
  x1 = max(x1, W-x[x.size()-1]);
  y1 = max(y1, H-y[y.size()-1]);
  return (x1)*(y1);
}

int main(){
  int x=15;
  int y=8;
  vector<pair<int,int>> arr{make_pair(3, 8), make_pair(11, 2), make_pair(8, 6)};
  cout << defenceKingdom(x,y,arr);
  return 0;
}