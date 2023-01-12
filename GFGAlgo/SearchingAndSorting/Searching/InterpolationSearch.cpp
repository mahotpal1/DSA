#include <bits/stdc++.h>

using namespace std;

int interpolationSearch(int* arr, int key, int size){
  int lo=0;
  int hi=size-1;
  if(key>arr[size-1]){
    return -1;
  }
  while(lo<=hi){
    int mid = lo+(double((hi-lo)/(arr[hi]-arr[lo]))*(key-arr[lo]));
    if(arr[mid]==key){
      return mid;
    }else if(arr[mid]<key){
      lo=mid+1;
    }else{
      lo=mid-1;
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
  int c = interpolationSearch(&arr[0], 8, size);
  cout << "Element 8 found at : " << c << endl;
  c = interpolationSearch(&arr[0], 6, size);
  cout << "Element 6 found at : " << c << endl;
  c = interpolationSearch(&arr[0], 7, size);
  cout << "Element 7 found at : " << c << endl;
  c = interpolationSearch(&arr[0], 0, size);
  cout << "Element 0 found at : " << c << endl;
  c = interpolationSearch(&arr[0], 9, size);
  cout << "Element 9 found at : " << c << endl;
  c = interpolationSearch(&arr[0], 256, size);
  cout << "Element 256 found at : " << c << endl;
  return 0;
}