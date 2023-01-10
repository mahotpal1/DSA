#include <iostream>

using namespace std;

int main(){
  int arr[6] = {3, 4, 1, 0, 5, 2};
  int i=0, temp;
  int size = sizeof(arr)/sizeof(arr[0]);
  cout << size << endl;
  for(int i=0; i<size; i++){
    if(arr[i] != i){
      for(int j=0; j<size; j++){
        if(i==arr[j]){
          temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp;
          break;
        }
      }
    }
  }
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  return 0;
}