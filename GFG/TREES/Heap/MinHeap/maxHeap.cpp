#include <bits/stdc++.h>
#include "maxHeap.h"

using namespace std;

maxHeap::maxHeap(int totalSize)
  :maxSize{totalSize}{
    heapSize=0;
    arr = new int[totalSize];
}

maxHeap::~maxHeap(){
  std::cout << "Destructor Called!!" << std::endl;
}

int maxHeap::parent(int i){
  return (i-1)/2;
}

int maxHeap::lChild(int i){
  return (2*i + 1);
}

int maxHeap::rChild(int i){
  return (2*i + 2);
}

void maxHeap::InsertKey(int key){
  if(heapSize == maxSize){
    std::cout << "Overflow : Could not insert key!!" <<std::endl;
  }

  heapSize++;
  int i=heapSize-1;
  arr[i] = key;

  while(i != 0 && arr[parent(i)] < arr[i]){
    swap(arr[i], arr[parent(i)]);
    i = parent(i);
  }
}

void maxHeap::increaseKey(int i, int newVal)
{
    arr[i] = newVal;
    while (i != 0 && arr[parent(i)] < arr[i]) {
        swap(arr[i], arr[parent(i)]);
        i = parent(i);
    }
}

int maxHeap::removeMax(){
  if(heapSize <= 0){
    return INT_MIN;
  }
  if(heapSize == 1){
    heapSize--;
    return arr[0];
  }

  int root=arr[0];
  arr[0] = arr[heapSize-1];
  heapSize--;

  maxHeapify(0);

  return root;
}

void maxHeap::deleteKey(int i)
{
    increaseKey(i, INT_MAX);
    removeMax();
}

void maxHeap::maxHeapify(int i)
{
    int l = lChild(i);
    int r = rChild(i);
    int largest = i;
    if (l < heapSize && arr[l] > arr[i])
        largest = l;
    if (r < heapSize && arr[r] > arr[largest])
        largest = r;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(largest);
    }
}