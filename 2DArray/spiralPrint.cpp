#include <bits/stdc++.h>

using namespace std;

void printSpiral(int arr[][10], int n, int m){

  //variables
  int startRow = 0;
  int endRow = n-1;
  int startCol = 0;
  int endCol = m-1;

  //outer_loop traverse array boundary :
  while(startCol<=endCol && startRow<=endRow){
    //start row
    for(int col=startCol; col<=endCol; col++){
      cout << arr[startRow][col] <<" ";
    }
    //end col
    for(int row=startRow+1; row<=endRow; row++){
      cout << arr[row][endCol] << " ";
    }
    //end Row
    for(int col=endCol-1; col>=startCol; col--){
      if(startRow==endRow){
        break;
      }
      cout << arr[endRow][col] << " ";
    }
    //start col
    for(int row=endRow-1; row>=startRow+1; row--){
      //To avoid double printing of elements.
      if(startCol==endCol){
        break;
      }
      cout << arr[row][startCol] << " ";
    }
    startRow++;
    endRow--;
    startCol++;
    endCol--;
  }
}

int main(){
  int arr[][10] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  int n=4,m=4;

  printSpiral(arr,n,m); 

  return 0;
}