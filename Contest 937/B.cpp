#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    int n;
    cin >> n;
    string linha1="",linha2="";
    for(int j = 0; j < n; j++){
      if(j % 2 == 0){
        linha1+="##";
        linha2+="..";
      }
      else if(j % 2 == 1){
        linha1+="..";
        linha2+="##";
      }
    }
    if(n == 1){
      cout << linha1 << endl;
      cout << linha1 << endl;
    }
    else{
      for(int j = 0; j < n; j++){
        if(j % 2 == 0){
          cout << linha1 << endl;
          cout << linha1 << endl;
        }
        else if(j % 2 == 1){
          cout << linha2 << endl;
          cout << linha2 << endl;
        }
      }
    }
  }
}