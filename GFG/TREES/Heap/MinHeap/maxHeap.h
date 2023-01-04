#ifndef _MAX_HEAP_H_
#define _MAX_HEAP_H_
class maxHeap{
  public :
    int* arr;
    int maxSize;
    int heapSize;
    maxHeap(int totalSize);
    ~maxHeap();
    int lChild(int i);
    int rChild(int i);
    int parent(int i);
    int getMax(){
      return arr[0];
    }
    int curSize(){
      return heapSize;
    }
    void InsertKey(int x);
    void increaseKey(int i, int newVal);
    int removeMax();
    void deleteKey(int i);
    void maxHeapify(int i);
};
#endif