#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int key, int n){
    int s=0;
    int e=n-1;

    while(s<e){
        int mid = (s+e)/2;
        if(arr[mid]>key){
            e = mid;
        }else if(arr[mid] == key){
            return mid;
        }else{
            s = mid;
        }
    }
    return 0;
}
int main(){

    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 12};
    int key;
    cout << "Enter a key to search" << endl;
    cin >> key;
    int x = BinarySearch(arr, key, arr.size());
    if(x){
        cout << "Element found at index " << x+1 << endl;
    }else{
        cout << "Element not present in the array!" << endl;
    }
    return 0;
}
