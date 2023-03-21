#include<iostream>
using namespace std; 

int repititions() {
  string n;
  cin >> n; 
  int count = 0; int maxCount = 0; char cur = 0;

  for (unsigned int i = 0; i < n.length(); i++){
    if (i == 0) {
      cur = n[i];
    }
    if (n[i] == cur) {
      count++;
    } else {
      if (count > maxCount) {
        maxCount = count;
      }
      count = 1;
      cur = n[i];
    }
    if (i == n.length()-1){
      if (count > maxCount){
        maxCount = count;
      }
    }
  } 
  cout << maxCount;
}