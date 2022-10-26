#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> arr){
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

vector<int> counting_sort(vector<int> arr){
  int largest=-1;
  for(int i=0; i<arr.size(); i++){
      largest = max(largest, arr[i]);
  }
  vector<int> freq(largest+1, 0);
  for(int x:arr){
    freq[x]++;
  }

  int j=0;
  for(int i=0; i<=largest; i++){
    while(freq[i]>0){
      arr[j] = i;
      freq[i]--;
      j++;
    }
  }
  return arr;
}

int main(){
  vector<int> arr{1,45,6,3,78,9,2,7};
  cout << "Original Array : " << endl;
  display(arr);
  cout << "Sorted array using insertion sort : " <<endl;
  display(counting_sort(arr));
  cout << endl;
  return 0;
}