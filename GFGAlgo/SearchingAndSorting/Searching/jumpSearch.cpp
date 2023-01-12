#include <bits/stdc++.h>

using namespace std;

int jumpSearch(int* arr, int key, int size){
  int jumpSize = sqrt(size);
  int start=0;
  int jump=jumpSize;
  while(jump<size && arr[jump]<key){
    start = jump;
    jump += jumpSize;
  }
  while(start < size){
    if(arr[start]==key){
      return start;
    }
    start++;
  }
  return -1;
}

int main(){
  int arr[7] = {2, 5, 6, 1, 8, 0, 7};
  int size=sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr+size);
  for(auto i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  int a = jumpSearch(&arr[0], 8, size);
  cout << "Element 8 found at : " << a << endl;
  int b = jumpSearch(&arr[0], 6, size);
  cout << "Element 6 found at : " << b << endl;
  int c = jumpSearch(&arr[0], 7, size);
  cout << "Element 7 found at : " << c << endl;
  c = jumpSearch(&arr[0], 0, size);
  cout << "Element 0 found at : " << c << endl;
  c = jumpSearch(&arr[0], 9, size);
  cout << "Element 9 found at : " << c << endl;
  c = jumpSearch(&arr[0], 256, size);
  cout << "Element 256 found at : " << c << endl;
  return 0;
}