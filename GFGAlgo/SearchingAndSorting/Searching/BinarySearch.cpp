#include <bits/stdc++.h>

using namespace std;

int binarySearch(int* arr, int key, int size){
  int start=0, end=size;
  while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==key){
      return mid;
    }else if(arr[mid]>key){
      end=mid-1;
    }else{
      start=mid+1;
    }
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
  int a = binarySearch(&arr[0], 2, size);
  cout << "Element 2 found at : " << a << endl;
  int b = binarySearch(&arr[0], 0, size);
  cout << "Element 0 found at : " << b << endl;
  int c = binarySearch(&arr[0], 9, size);
  cout << "Element 9 found at : " << c << endl;
  return 0;
}