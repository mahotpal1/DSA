/*Chopsticks
Given N sticks and an array length where each length[i] represents length of each stick. 
Your task is to make maximum number of pairs of these sticks such that the difference between the length of two sticks is at most D.
A stick can't be part of more than one pair of sticks.
*/
#include <bits/stdc++.h>
using namespace std;

int Chopstick(vector<int> length, int D){
  int count = 0;
  sort(length.begin(), length.end());
  for(int i=0; i<length.size()-1; i++){
    if(length[i+1]-length[i] <= D){
      count++;
      i++;
    }
  }
  return count;
}

int main(){
  vector<int> arr{1, 3, 3, 9, 4};
  int diff = 2;
  cout << "Total pair Count : ";
  cout << Chopstick(arr, diff) << endl;
  return 0;
}