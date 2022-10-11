#include <iostream>
#include <vector>
using namespace std;

void printAllPairs(vector<int> arr, int size){
    for(int i=0; i<size; i++){
        int x=arr[i];
        for(int j=i+1; j<size; j++){
            int y=arr[j];
            cout << "[" << x << "," << y <<"]";
        }
        cout << endl;
    }
}

int main(){
    vector<int> arr{1, 2, 3, 4, 5, 6, 9};
    printAllPairs(arr, arr.size());
}