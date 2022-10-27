#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y=*x;
}

void display(vector<int> a){
  for(int i=0; i<a.size(); i++){
    cout << a[i] << " ";
  }
  cout << endl;
}
vector<int> sortingWithComparator(vector<int> a, bool flag){
  int n = a.size();
    for(int i=0; i<n; i++){
      int current = a[i];
      int min_pos = i;
      for(int j=i; j<n; j++){
        if(a[j] < a[min_pos]){
          min_pos = j;
        }
      }
      swap(a[min_pos], a[i]);
    }
    if(flag == false){
    reverse(a.begin(), a.end());
  }
  return a;
} 
int main(){
  vector<int> arr{1,45,6,3,78,9,2,7};
  cout << "Original Array : " << endl;
  display(arr);
  cout << "Sorted array using insertion sort : " <<endl;
  display(sortingWithComparator(arr, true));
  cout << endl;
  return 0;
}