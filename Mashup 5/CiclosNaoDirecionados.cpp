#include <bits/stdc++.h>
using namespace std;
vector<int> grafo[5];
bool visitados[5+1];
bool ciclosNaoDirecionados(int node, int last){
  if(visitados[node]){
    return true;
  }
  visitados[node] = true;
  for(auto v: grafo[node]){
    if(v != last){
      if(ciclosNaoDirecionados(v, node)){
        return true;
      }
    }
  }
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
    grafo[v].push_back(u);
  }
  bool ciclo = false;
  for(int i = 0; i < n; i++){
    if(!visitados[i]){
      if(ciclosNaoDirecionados(i,-1)){
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