#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> arr){
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

//Sorting Done similar with sorting done with cards
vector<int> InsertionSort(vector<int> arr, int n){
  for(int i=0; i<n; i++){
    //assign current value as card to be swapped
    int current=arr[i];
    int prev = i-1;
    while(prev>=0 && arr[prev]>current){
      //alternately check for each previous card and then create a space until smallest card is found. 
      arr[prev+1] = arr[prev];
      prev = prev-1;
    }
    //insert at the place found before smallest card in the last of iteration. 
    arr[prev+1] = current;
  }
  return arr;
}

int main(){
  vector<int> arr{1,45,6,3,78,9,2,7};
  cout << "Original Array : " << endl;
  display(arr);
  cout << "Sorted array using insertion sort : " <<endl;
  display(InsertionSort(arr, arr.size()));
  cout << endl;
  return 0;
}
