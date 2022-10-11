#include <iostream>
#include <vector>
using namespace std;

void printSubarray(vector<int> arr, int size){
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            for(int k=i; k<=j; k++){
                cout << arr[k] << ", ";
            }
            cout << endl;
        }
    }
}


int main(){
    vector<int> arr{1,8,34,67,3};
    printSubarray(arr, arr.size());
    return 0;
}