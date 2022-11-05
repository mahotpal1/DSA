#include <iostream>
#include <cstring>

using namespace std;

int main(){
  int totalLines;
  cin >> totalLines;
  cin.get();
  char sentence[1000];
  char largest[1000];
  int max = 0;
  while(totalLines--){
    cin.getline(sentence, 1000, '\n');
    if(strlen(sentence) > max){
      max = strlen(sentence);
      strcpy(largest, sentence);
    }
  }
  cout << max;

  return 0;
  }