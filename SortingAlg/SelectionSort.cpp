#include <iostream>
#include <vector>

using namespace std;

void swap(int *X, int *Y){
  int temp = *X;
  *X = *Y;
  *Y = temp;
}

void display(vector<int> arr){
  for(int i=0;i<arr.size();i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

vector<int> selection_sort(vector<int> arr, int n){
  for(int i=0; i<n-1; i++){
    int current = arr[i];
    int min_pos = i;
    for(int j=i+1; j<n; j++){
      if(arr[j]<arr[min_pos]){
        min_pos = j;
      }
    }
    swap(arr[min_pos], arr[i]);
  }
  return arr;
}
int main(){
  vector<int> arr{1,45,6,3,78,9,2,7};
  cout << "Original Array : " << endl;
  display(arr);
  cout << "Sorted array using insertion sort : " <<endl;
  display(selection_sort(arr, arr.size()));
  cout << endl;
  return 0;
}