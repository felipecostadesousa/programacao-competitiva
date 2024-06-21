#include <bits/stdc++.h>
using namespace std;
int main() {
  string s,t;
  cin >> s >> t;
  int n;
  cin >> n;
  vector<vector<int>> c(26,vector<int>(26,1e9));
  for (int i = 0; i < 26; i++){
    c[i][i] = 0;
  }
  for (int i = 0; i < n; i++){
    char a,b;
    int w;
    cin >> a >> b >> w;
    c[a - 'a'][b - 'a'] = min(c[a - 'a'][b - 'a'],w);
  }
  if (s.size() != t.size()) {
    cout << -1 << endl;
  }
  else{
    int money = 0;
    string resultado;
    bool flag = true;
    for (int i = 0; i < 26; i++){
      for (int j = 0; j < 26; j++){
        for (int k = 0; k < 26; k++) {
          if ((c[j][i] < 1e9) && (c[i][k] < 1e9)){
            c[j][k] = min(c[j][k],c[j][i]+c[i][k]);
          }
        }
      }
    }
    for (int i = 0; i < s.size(); i++){
      if (s[i] == t[i]) {
        resultado += s[i];
      }
      else{
        int minimo = 1e9;
        char caractere;
        for (int j = 0; j < 26; j++){
          int atual = c[s[i]-'a'][j]+c[t[i]-'a'][j];
          if (atual < minimo){
            minimo = atual;
            caractere = 'a' + j;
          }
        }
        if ((minimo == 1e9) && (flag == true)) {
          cout << -1 << endl;
          flag = false;
        }
        else{
          money += minimo;
          resultado += caractere;
        }
      }
    }
    if(flag){
      cout << money << endl;
      cout << resultado << endl;
    }
  }
}