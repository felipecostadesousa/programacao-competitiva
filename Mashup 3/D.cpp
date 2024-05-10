#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
  int t;
  cin >> t;
  for(int i = 0;i < t; i++){
    int k,n,m;
    cin >> k >> n >> m;
    queue<int> filaA;
    queue<int> filaB;
    vector<int> v;
    for(int j = 0; j < n; j++){
      int a;
      cin >> a;
      filaA.push(a);
    }
    for(int j = 0; j < m; j++){
      int b;
      cin >> b;
      filaB.push(b);
    }
    int contador = 0;
    while(true){
      if(((filaA.front() == 0) || (filaA.front() <= k)) && (!filaA.empty())){
        int aux = filaA.front();
        filaA.pop();
        v.push_back(aux);
        if(aux == 0){
          k++;
        }
      }
      else if(((filaB.front() == 0) || (filaB.front() <= k)) && (!filaB.empty())){
        int aux = filaB.front();
        filaB.pop();
        v.push_back(aux);
        if(aux == 0){
          k++;
        }
      }
      contador++;
      if(contador > v.size()){
        break;
      }
    }
    if(v.size() != (n+m)){
      cout << -1 << endl;
    }
    else{
      for(int j = 0; j < v.size(); j++){
        cout << v[j] << " ";
      }
      cout << endl;
    }
  }
}
