#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    string s;
    cin >> s;
    int h = stoi(s.substr(0,2));
    if(h < 12){
      if(h == 0){
        cout << "12" << s.substr(2,3) << " AM" << endl;
      }
      else{
        cout << s << " AM" << endl;
      }

    }
    else if(h == 12){
      cout << s << " PM" << endl;
    }
    else if(h > 12){
      h-=12;
      if(h <10){
        cout << "0" << h << s.substr(2,3) << " PM" << endl;
      }
      else{
        cout << h << s.substr(2,3)<< " PM" << endl;
      }
      
    }
  }
}