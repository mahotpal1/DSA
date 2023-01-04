#include <bits/stdc++.h>
#include "maxHeap.h"

using namespace::std;

int main()
{
    // Assuming the maximum size of the heap to be 15.
    maxHeap h(15);
 
    // Asking the user to input the keys:
    int k, i, n = 6, arr[10];
    cout << "Entered 6 keys:- 3, 10, 12, 8, 2, 14 \n";
    h.InsertKey(3);
    h.InsertKey(10);
    h.InsertKey(12);
    h.InsertKey(8);
    h.InsertKey(2);
    h.InsertKey(14);
 
    // Printing the current size
    // of the heap.
    cout << "The current size of the heap is "
         << h.curSize() << "\n";
 
    // Printing the root element which is
    // actually the maximum element.
    cout << "The current maximum element is " << h.getMax()
         << "\n";
 
    // Deleting key at index 2.
    h.deleteKey(2);
 
    // Printing the size of the heap
    // after deletion.
    cout << "The current size of the heap is "
         << h.curSize() << "\n";
 
    // Inserting 2 new keys into the heap.
    h.InsertKey(15);
    h.InsertKey(5);
    cout << "The current size of the heap is "
         << h.curSize() << "\n";
    cout << "The current maximum element is " << h.getMax()
         << "\n";
 
    return 0;
}