#include <bits/stdc++.h>

class MatrixOp{
  private:
    std::vector<std::vector<int>> matrix;

    void display(){
      for(int i=0; i<matrix.size(); i++){
        std::cout << "| ";
        for(int j=0; j<matrix[i].size(); j++){
          std::cout << matrix[i][j] << " ";
        }
        std::cout << "|" << std::endl;
      }
      std::cout << std::endl;
    }

    void swap(int *a, int *b){
      int temp = *a;
      *b = *a;
      *a = temp;
    }

    std::vector<int> reverse_array(std::vector<int> arr){
      int start = 0;
      int end = arr.size()-1;

      while(start<end){
        swap(&arr[start], &arr[end]);
        start++;
        end--;
      }

      return arr;
    }

    void transpose(std::vector<std::vector<int>> arr1){
      std::vector<std::vector<int>> temp = arr1;
    }

  public :
    MatrixOp(std::vector<std::vector<int>> m)
      :matrix{m}{

    }
    ~MatrixOp(){
      std::cout << "Destructor Called!!" << std::endl;
    }
    
    void Search(int key){
      for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
          if(matrix[i][j] == key){
            std::cout << "Element found at co-ordinate : {" <<i+1 << "," << j+1 << "}." << std::endl;
            return; 
          }
        }
      }
      std::cout << "Element is not present in the matrix!" << std::endl;
      return; 
    }

    void printDiagonal(){
      std::cout << "Diagonal Elements : " << std::endl;
      for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
          if(i == j){
            std::cout << matrix[i][j] << " ";
          }
        }
      }
      std::cout << std::endl;
      return;
    }

    void sortMatrix(){
      std::cout << "Unsorted Matrix : " << std::endl;
      display();
      std::vector<int> arr;
      for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
          arr.push_back(matrix[i][j]);
        }
      }
      std::sort(arr.begin(), arr.end());
      int count=0;
      for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
          matrix[i][j] =  arr[count];
          count++;
        }
      }
      std::cout << "Sorted Matrix :  " << std::endl;
      display();
    }
    
};

int main(){
  {
    std::vector<std::vector<int>> max{{1,3,5}, {2,8,9}, {1,1,1}};
    MatrixOp m = MatrixOp(max);
    m.Search(5);
    m.printDiagonal();
    m.sortMatrix();
    return 0;
  }
}