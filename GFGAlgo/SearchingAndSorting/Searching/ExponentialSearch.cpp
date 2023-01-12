#include <bits/stdc++.h>

using namespace std;

int binarySearch(int* arr, int key, int i){
  if(key>arr[i]){
    return -1;
  }else{
    int lo=i/2, hi=i;
    while(lo<=hi){
      int mid=(lo+hi)/2;
      if(arr[mid]==key){
        return mid;
      }else if(arr[mid]<key){
        lo=mid+1;
      }else{
        hi=mid-1;
      }
    }
  }
  return -1;
}

int expSearch(int* arr, int key, int size){
  int lo=0, hi=size-1;
  int i=1;
  while(i<size){
    if(arr[i]<key){
      i=pow(2,i);
    }else{
      break;
    }
  }
  cout << "Hello!" << endl;
  int c = binarySearch(arr,key,i);
  return c;
}

int main(){
  int arr[7] = {2, 5, 6, 1, 8, 0, 7};
  int size=sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr+size);
  for(auto i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  int c = expSearch(&arr[0], 8, size);
  cout << "Element 8 found at : " << c << endl;
  c = expSearch(&arr[0], 6, size);
  cout << "Element 6 found at : " << c << endl;
  c = expSearch(&arr[0], 7, size);
  cout << "Element 7 found at : " << c << endl;
  c = expSearch(&arr[0], 0, size);
  cout << "Element 0 found at : " << c << endl;
  c = expSearch(&arr[0], 9, size);
  cout << "Element 9 found at : " << c << endl;
  c = expSearch(&arr[0], 256, size);
  cout << "Element 256 found at : " << c << endl;
  return 0;
}
