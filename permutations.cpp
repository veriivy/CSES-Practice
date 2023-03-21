#include <iostream>
using namespace std;
#define ll long long

int main(){
  ll n, cur = 0;
  cin >> n; 
  if (n == 1){
    cout << 1;
  }
  if (n <= 3){
      cout << "NO SOLUTION";
  } else{
    cur = n-1;
    cout << cur << " ";
    for (int i = 0; i < n-1; i++){
      if (cur == 0){
        break;
      }
      if (cur > 2){
        cur -= 2;
        cout << cur << " ";
      } else {
        cur = n;
        cout << cur << " ";
      }
      
    }
  }
}