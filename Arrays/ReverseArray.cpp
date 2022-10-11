#include <iostream>
#include <vector>
using namespace std;

vector<int> ReverseArray(vector<int> arr, int size){
    int s = 0;
    int e = size-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s = s+1;
        e = e-1;
    }
    return arr;
}

void display(vector<int> arr){
    for(auto x : arr){
        cout << x << "\t";
    }
    cout << endl;
}
int main(){
    
    vector<int> arr{1, 45, 3, 7, 98, 10};
    cout << "Original Array : " << endl;
    display(arr);
    cout << "Reversed Array : " << endl;
    display(ReverseArray(arr, arr.size()));
    return 0;
}