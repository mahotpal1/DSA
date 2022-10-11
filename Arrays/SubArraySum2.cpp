#include <iostream>
#include <Vector>
using namespace std;

//define one prefix array having sum till ith element.
//then jth-(i-1)th value will return subarray sum.

int subArraySumUsingPrefixSum(vector<int> arr, int size){
    vector<int> prefix;
    prefix.push_back(arr[0]);
    for(int i=1; i<arr.size(); i++){
        prefix.push_back(prefix[i-1]+arr[i]);
    }
    int largestSum = 0;
    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            int maxSubArray = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            largestSum = max(maxSubArray, largestSum);
        }
    }
    return largestSum;
}

int main(){
    vector<int> arr{1,4,-23,78,98,-17};
    cout << "Largest Subarray sum among all subarrays is : " << subArraySumUsingPrefixSum(arr, arr.size());
    return 0;
}