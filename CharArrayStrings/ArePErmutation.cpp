#include <bits/stdc++.h>

using namespace std;

int main(){
  string A;
  string B;
  cout << "Enter 1st string\n";
  cin >> A;
  cout << "Enter 2nd string\n";
  cin >> B;
  if(A.size() != B.size()){
        cout << "false";
    }else{
        bool flag;
        for(int i=0; i< A.size(); i++){
            flag = false;
            for(int j=0; j<B.size(); j++){
                if(A[i] == B[j]){
                    flag = true;
                    break;
                }
            }
        }
        cout << (flag?"True":"False");
    }
    return 0;
}

/*
PS D:\DSA\charArrayStrings> ./a
Enter 1st stringabcd
Enter 2nd stringbcda
PS D:\DSA\charArrayStrings> c++ ArePErmutation.cpp
PS D:\DSA\charArrayStrings> ./a
abcd
Enter 2nd string
bcda
1
PS D:\DSA\charArrayStrings> c++ ArePErmutation.cpp
Enter 1st string
abcd
Enter 2nd string
bcda
True
PS D:\DSA\charArrayStrings> ./a
Enter 1st string
abcde
Enter 2nd string
cbf
0
PS D:\DSA\charArrayStrings> ./a
Enter 1st string
abcd
Enter 2nd string
abcg
False
*/