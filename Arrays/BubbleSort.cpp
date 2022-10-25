#include <iostream>
#include <vector>
using namespace std;

void swap(int *x, int *y){
  int temp = *x;
  *x=*y;
  *y=temp;
}

void display(vector<int> arr){
  for(int i=0;i<arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

vector<int> BubbleSort(vector<int> arr, int n){
  for(int i = 0; i < n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }
  return arr;
}

int main(){
  vector<int> arr{12,4,5,7,8,10,9};
  cout << "Original Array : "<< endl;
  display(arr);
  cout << "Sorted Array"<<endl;
  display(BubbleSort(arr, arr.size()));

  return 0;
}