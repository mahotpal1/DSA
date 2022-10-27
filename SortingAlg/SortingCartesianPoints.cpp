#include <iostream>
#include <vector>
#include <utility> 

using namespace std;

void display(vector<pair<int,int>> arr){
  for(pair<int, int> i:arr){
    cout << "[" << i.first << "," << i.second << "]" << " ";
  }
  cout << endl;
}
vector<pair<int, int>> sortCartesian(vector<pair<int, int>> a)
{
    int n = a.size();
    for(int i=0; i<n; i++){
      bool flag = true;
      int current = a[i].first;
      int min_pos = i;
      for(int j=i; j<n; j++){
        if(a[j].first < a[min_pos].first){
          min_pos = j;
        }
        else if(a[j].first == a[min_pos].first){
          if(a[j].second < a[min_pos].second){
            min_pos = j;
          }
        }
      }
      swap(a[min_pos], a[i]);
    }
    return a;
}

int main(){
  vector<pair<int,int>> arr{make_pair(3, 4), make_pair(2, 3), make_pair(3, 7), make_pair(1, 5), make_pair(3, 4)};
  cout << "Original Array : " << endl;
  display(arr);
  cout << "Sorted array using insertion sort : " <<endl;
  display(sortCartesian(arr));
  cout << endl;
  return 0;
}