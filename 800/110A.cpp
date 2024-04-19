#include <bits/stdc++.h>
using namespace std;
int main() {
  string n;
  cin >> n;
  int aux = 0;
  for(int i = 0; i < n.size(); i++){
    if((n[i] == '4') || (n[i] == '7')){
      aux++;
    }
  }
  if((aux == 4) || (aux == 7)){
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}