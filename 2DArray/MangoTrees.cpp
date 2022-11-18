#include <bits/stdc++.h>

using namespace  std;

/*Rahul has to devide a field into four quadrants the quadrant with mininimum number of mango trees will 
  be given to Rahul
  
  GOAL : HE has to maximize his minimum
*/
//using bruteforce -> make a cut at every i,j

  int main(){
    
    return 0;
  }
  /*
  1) Calculate Auxillary matrix containing maximum mongo trees 
   -> Let M[x,y] be the number of mango trees in the rectangle between (0,0)
    & (x,y).
    We can calculate M[x,y] as follows:

    M[x,y] = 1 + M[x-1,y] + M[x,y-1] - M[x-1.y-1]
                 if Mango tree at (x,y)
    M[x,y] = 0 + M[x-1,y] + M[x,yy-1] - M[x-1, y-1]
                if no Mango Tree at (x,y) 
  */