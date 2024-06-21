#include <bits/stdc++.h>
using namespace std;
vector<int> grafo[5];
int cor[5+1] = {0};
int BRANCO = 0;
int CINZA = 1;
int PRETO = 2;
bool ciclosDirecionado(int node){
  if(cor[node] == CINZA){
    return true;
  }
  if(cor[node] == PRETO){
    return false;
  }
  cor[node] = CINZA;
  for(auto v: grafo[node]){
    if (ciclosDirecionado(v)) {
      return true;
    }
  }
  cor[node] = PRETO;
  return false;
}
int main(){
  int n,e;
  cin >> n >> e;
  for(int i = 0; i < e; i++){
    int u,v;
    cin >> u >> v;
    u--;
    v--;
    grafo[u].push_back(v);
  }
  bool ciclo = false;
  for(int i = 0; i < n; i++){
    if(cor[i] == BRANCO){
      if (ciclosDirecionado(i)) {
        ciclo = true;
        break;
      }
    }
  }
  if(ciclo){
    cout << "COM CICLO" << endl;
  }
  else{
    cout << "SEM CICLO" << endl;
  }
}