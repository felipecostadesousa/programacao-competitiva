#include <bits/stdc++.h>
using namespace std;
vector<int> grafo[6];
bool grafoBipartido(int n, vector<int> grafo[]){
  vector<int> cor(n, -1);
  queue<pair<int,int>> fila;
  for(int i = 0; i < n; i++) {
    if (cor[i] == -1) {
      fila.push({i,0});
      cor[i] = 0;
      while (!fila.empty()) {
        pair<int,int> p = fila.front();
        fila.pop();
        int verticeAtual = p.first;
        int corAtual = p.second;
        for (int j : grafo[verticeAtual]) {
          if (cor[j] == corAtual){
            return false;
          }
          if (cor[j] == -1) {
            cor[j] = (corAtual) ? 0 : 1;
            fila.push({j,cor[j]});
          }
        }
      }
    }
  }
  return true;
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
  bool bipartido = grafoBipartido(n, grafo);
  if(bipartido){
    cout << "GRAFO BIPARTIDO" << endl;
  }
  else{
    cout << "GRAFO NAO BIPARTIDO" << endl;
  }
}