#include <iostream>
#include <vector>
using namespace std;

//Given a sorted array and a number x, find a pair in array whose sum is closest to x.

void closestSum(vector<int> arr, int x){
    int a =arr[0];
    int b = arr[0];

    for(int i=0; i<x; i++){
        for(int j=i; j<x; j++){
            if(arr[i]+arr[j] <= x && arr[i]+arr[j] > a+b){
                a = arr[i];
                b = arr[j];
            }
        }
    }
    cout << a << b;
}

int main(){
    vector<int> arr{1,4,-23,78,98,-17};
    cout << "Largest Subarray sum among all subarrays is : ";
    closestSum(arr, arr.size());
    return 0;
}