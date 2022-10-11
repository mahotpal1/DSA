#include <iostream>
#include <vector>
using namespace std;

//There can be a array in which negative element can be there, 
//in that case sub array sum will be maxm not whole array.

int SubArrayLargestSumUsingBruteForce(vector<int> arr, int size){
    int largestSum=0;
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            int subArraySum = 0;
            for(int k=i; k<=j; k++){
                subArraySum += arr[k];
            }
            largestSum = max(largestSum, subArraySum);
        }
    }
    return largestSum;
}

int main(){
    vector<int> arr{1,5,76,89,23};
    cout << "Largest Sum Among Sub-Arrays : " << SubArrayLargestSumUsingBruteForce(arr, arr.size());
}