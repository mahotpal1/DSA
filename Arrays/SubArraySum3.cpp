#include <iostream>
#include <vector>
using namespace std;

//use currentsum and maximum sum, 
//if current sum becomes negative, we make it as 0.
//if currentsum> maximum sum then update maxm sum as current sum
int KadanesAlgo(vector<int> arr, int size){
    int cs=0;
    int largest=0;
    for(int i=0; i<size; i++){
        cs = cs + arr[i];
        if (cs < 0){
            cs = 0;
        }
        largest = max(largest, cs);
    }
    return largest;
}
int main(){
    vector<int> arr{1,4,-23,78,98,-17};
    cout << "Largest Subarray sum among all subarrays is : " << KadanesAlgo(arr, arr.size());
    return 0;
}