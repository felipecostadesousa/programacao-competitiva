#include<bits/stdc++.h>
using namespace std;
const int INF = 1000000000;
vector<vector<pair<int,int>>> grafo;
vector<int> distancia;
bool spfa(int node, vector<int>& distancia) {
  int n = grafo.size();
  distancia.assign(n,INF);
  vector<int> cnt(n,0);
  vector<bool> inqueue(n,false);
  queue<int> fila;
  distancia[node] = 0;
  fila.push(node);
  inqueue[node] = true;
  while (!fila.empty()) {
    int verticeAtual = fila.front();
    fila.pop();
    inqueue[verticeAtual] = false;
    for (auto edge : grafo[verticeAtual]) {
      int to = edge.first;
      int len = edge.second;
      if (distancia[verticeAtual] + len < distancia[to]) {
        distancia[to] = distancia[verticeAtual] + len;
        if (!inqueue[to]) {
          fila.push(to);
          inqueue[to] = true;
          cnt[to]++;
          if (cnt[to] > n)
            return false;
        }
      }
    }
  }
  return true;
}
int main(){
  int n,e;
  cin >> n >> e;
  grafo.resize(n + 1);
  distancia.resize(n + 1);
  for(int i = 0; i < e; i++){
    int u,v,w;
    cin >> u >> v >> w;
    grafo[u].push_back({v,w});
    grafo[v].push_back({u,w});
  }
  bool cicloNegativo = spfa(1, distancia);
  if(!cicloNegativo){
    cout << "CICLO NEGATIVO" << endl;
  }
  else{
    for(int i = 1; i <= n; i++){
      if (distancia[i] == INF) {
        cout << "INFINITO" << endl;
      } 
      else{
        cout << distancia[i] << endl;
      }
    }
  }
}