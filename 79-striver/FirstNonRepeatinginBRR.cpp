#include<bits/stdc++.h>
using namespace std;

int firstNonRepeating(string &str){
  map<char, int> freq;
  int n = str.size();
  string brr;

  for(int i = 0; i < n; i++){
    if(i%2 == 0){
      brr += str[i];
    }
  }
  for(int i = 0; i < n; i++){
    if(i%2 != 0){
      brr += str[i];
    }
  }

  for(int i = 0; i < n; i++){
    freq[brr[i]]++;
  }

  for(char c: brr){
    if(freq[c] == 1){
      return c;
    }
  }
  return -1;
}

int main(){
  string str = "aabbcc";
  cout<< firstNonRepeating(str);
  return 0;
}
