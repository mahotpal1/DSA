#include <bits/stdc++.h>

using namespace std;

int linear_search(int* arr, int key, int size){
  if(arr[0]==key){
    return 0;
  }else{
    for(int i=0; i<size; i++){
      if(arr[i] == key){
        return i;
      }
    }
  }
  return -1;
}

int main(){
  int arr[7]={2, 5, 6, 1, 8, 0, 7};
  int a = linear_search(&arr[0], 2, 7);
  cout << "Element 2 found at : " << a << endl;
  int b = linear_search(&arr[0], 0, 7);
  cout << "Element 0 found at : " << b << endl;
  int c = linear_search(&arr[0], 9, 7);
  cout << "Element 9 found at : " << c << endl;
  return 0;
}