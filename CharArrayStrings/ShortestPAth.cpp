#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char input[1000];
  cin.getline(input, 1000, '\n');
  int x=0, y=0;

  for(int i=0; input[i] != '\0'; i++){
    switch(input[i]){
      case 'N' : y++;
                 break;
      case 'S' : y--;
                 break;
      case 'E' : x++;
                 break;
      case 'W' : x--;
                 break;
      default  : exit(0);
    }
  }

  if(x>=0 && y>=0){
    while(y--){
      cout << 'N';
    }
    while(x--){
      cout << 'E';
    }
  }else if(x>=0 && y<=0){
    while(y++){
      cout << 'S';
    }
    while(x--){
      cout << 'E';
    }
  }else if(x<=0 && y>=0){
    while(y--){
      cout << 'N';
    }
    while(x++){
      cout << 'W';
    }
  }else{
    while(y++){
      cout << 'S';
    }
    while(x++){
      cout << 'W';
    }
  }

  return 0;
}