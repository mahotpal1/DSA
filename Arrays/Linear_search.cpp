#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(vector<int> arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return 0;
}

int main(){
    
    vector<int> arr{10, 15, 12, 9, 6, 4, 3, 10, 8};
    int key;
    cin >> key;
    int x = LinearSearch(arr, arr.size(), key);
    if(x){
        cout << "Element found at index " << x+1 << endl;
    }else{
        cout << "Element not present in Array!" << endl;
    }
    return 0;
}